#include "memory.h"
#include "stddef.h"
#include "unistd.h"


static memory_chunk_header_t internal_memory_buffer_base;
static memory_chunk_header_t *internal_memory_ptr_free_chunk_list = &internal_memory_buffer_base;
static memory_chunk_header_t *internal_memory_ptr_used_chunk_list;


static void 
internal_memory_free_list_chunk_add(memory_chunk_header_t *ptr_chunk_to_add){
    memory_chunk_header_t *ptr_curr_free_chunk = internal_memory_ptr_free_chunk_list;

    while(!(ptr_chunk_to_add > ptr_curr_free_chunk && ptr_chunk_to_add < ptr_curr_free_chunk->ptr_next)){
        if(ptr_curr_free_chunk >= ptr_curr_free_chunk->ptr_next && (ptr_chunk_to_add > ptr_curr_free_chunk || ptr_chunk_to_add < ptr_curr_free_chunk->ptr_next)){
            break;
        }

        ptr_curr_free_chunk = ptr_curr_free_chunk->ptr_next;
    }

    memory_chunk_header_t *address_after_chunk_to_add = ptr_chunk_to_add + ptr_chunk_to_add->num_blocks;

    if(address_after_chunk_to_add == ptr_curr_free_chunk->ptr_next){
        ptr_chunk_to_add->num_blocks += ptr_curr_free_chunk->ptr_next->num_blocks;
        ptr_chunk_to_add->ptr_next = ptr_curr_free_chunk->ptr_next->ptr_next;
    }
    else {
        ptr_chunk_to_add->ptr_next = ptr_curr_free_chunk->ptr_next;
    }

    memory_chunk_header_t *address_after_curr_free_block =  ptr_curr_free_chunk + ptr_curr_free_chunk->num_blocks;

    if(address_after_curr_free_block == ptr_chunk_to_add){
        ptr_curr_free_chunk->num_blocks += ptr_chunk_to_add->num_blocks;
        ptr_curr_free_chunk->ptr_next = ptr_chunk_to_add->ptr_next;
    }   
    else {
        ptr_curr_free_chunk->ptr_next = ptr_chunk_to_add;
    }

    internal_memory_ptr_free_chunk_list = ptr_curr_free_chunk;
}

static memory_chunk_header_t *
internal_memory_request_more_memory_from_kernel(size_t num_blocks_to_allocate){
    void *ptr_new_break;

    memory_chunk_header_t *ptr_new_chunk;

    if(num_blocks_to_allocate > MEMORY_MIN_ALLOC_SIZE){
        num_blocks_to_allocate = MEMORY_MIN_ALLOC_SIZE / sizeof(memory_chunk_header_t);
    }

    ptr_new_break = sbrk(num_blocks_to_allocate * sizeof(memory_chunk_header_t));
    const void *FAILED_SBRK_VALUE = (void *) -1;
    
    if(ptr_new_break == FAILED_SBRK_VALUE){
        return NULL;
    }

    ptr_new_chunk = (memory_chunk_header_t *)ptr_new_break;
    ptr_new_chunk->num_blocks = num_blocks_to_allocate;
    internal_memory_free_list_chunk_add(ptr_new_chunk);

    return internal_memory_ptr_free_chunk_list;
}

void *
memory_allocate(size_t alloc_size)
{
    size_t num_blocks_to_allocate = ( (alloc_size + sizeof(memory_chunk_header_t) - 1) / sizeof(memory_chunk_header_t) ) + 1;


    memory_chunk_header_t *ptr_curr_free_chunk = internal_memory_ptr_free_chunk_list->ptr_next;
    memory_chunk_header_t *ptr_prev_free_chunk = internal_memory_ptr_free_chunk_list;


    while(1)
    {
        if(ptr_curr_free_chunk->num_blocks >= num_blocks_to_allocate)
        {
            if(ptr_curr_free_chunk->num_blocks == num_blocks_to_allocate)
            {
                ptr_prev_free_chunk->ptr_next = ptr_curr_free_chunk->ptr_next;
            }
            else
            {
                size_t num_blocks_to_shift_curr_ptr 
                    = ptr_curr_free_chunk->num_blocks - num_blocks_to_allocate;

                ptr_curr_free_chunk += num_blocks_to_shift_curr_ptr;
                ptr_curr_free_chunk->num_blocks = num_blocks_to_allocate;
            }

            internal_memory_ptr_free_chunk_list = ptr_prev_free_chunk;

            if(internal_memory_ptr_used_chunk_list == NULL)
            {
                ptr_curr_free_chunk->ptr_next = ptr_curr_free_chunk;

                internal_memory_ptr_used_chunk_list = ptr_curr_free_chunk;
            }
            else 
            {
                ptr_curr_free_chunk->ptr_next = internal_memory_ptr_used_chunk_list->ptr_next;
                internal_memory_ptr_used_chunk_list->ptr_next = ptr_curr_free_chunk;
            }

            // return + 1 so that you get the actual memory after the header
            return (void *) (ptr_curr_free_chunk + 1); 
        }

        if(ptr_curr_free_chunk == internal_memory_ptr_free_chunk_list)
        { // not enough memory
            ptr_curr_free_chunk = internal_memory_request_more_memory_from_kernel(num_blocks_to_allocate);

            if(ptr_curr_free_chunk == NULL)
            {
                return NULL;
            }
        }

        ptr_prev_free_chunk = ptr_curr_free_chunk;
        ptr_curr_free_chunk = ptr_curr_free_chunk->ptr_next;
    }

}