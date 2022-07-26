#include "stddef.h"

// 4 KB
#define MEMORY_MIN_ALLOC_SIZE 4096

typedef struct memory_chunk_header_t memory_chunk_header_t;

struct memory_chunk_header_t {
    size_t num_blocks;
    memory_chunk_header_t *ptr_next;
};

// memory -> { (CHUNK [BLOCK][BLOCK][BLOCK]...), (CHUNK [BLOCK][BLOCK][BLOCK]...), ... }

#define MEMORY_BLOCK_SIZE sizeof(memory_chunk_header_t)

static void 
internal_memory_free_list_chunk_add(memory_chunk_header_t *block_ptr);

static memory_chunk_header_t *
internal_memory_request_more_memory_from_kernel(size_t num_units);


void *memory_allocate(size_t alloc_size);
