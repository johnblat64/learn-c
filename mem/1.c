// MEMORY
// LINEAR ALLOCATOR
// ALLOCATING MEMORY FROM A BACKING MEMORY ARRAY

// other names for this are
// arena or region based memory allocator

#include <stddef.h>
#include <stdio.h>


typedef struct LinearMemoryBuffer LinearMemoryBuffer;
struct LinearMemoryBuffer 
{
    unsigned char *memory_buffer;
    size_t capacity_in_bytes;
    size_t current_offset_in_bytes;
};



LinearMemoryBuffer LinearMemoryBuffer_init(void *backing_memory, size_t backing_memory_size_in_bytes)

{
    LinearMemoryBuffer linear_memory_buffer;
    linear_memory_buffer.memory_buffer = (unsigned char *) backing_memory;
    linear_memory_buffer.capacity_in_bytes = backing_memory_size_in_bytes;
    linear_memory_buffer.current_offset_in_bytes = 0;

    return linear_memory_buffer;
}

/**
 * Returns NULL if no more space for allocations
 */
void *LinearMemoryBuffer_alloc(LinearMemoryBuffer *lmb, size_t allocation_size)
{
    size_t offset_after_allocation_in_bytes = lmb->current_offset_in_bytes + allocation_size;

    if(offset_after_allocation_in_bytes > lmb->capacity_in_bytes)
    {
        return NULL;
    }

    void *ptr = lmb->memory_buffer + lmb->current_offset_in_bytes; // going to shift address 1 byte at a time because it is unsigned char ( 1 byte size )

    lmb->current_offset_in_bytes += allocation_size;

    return ptr;
}

void LinearMemoryBuffer_free(LinearMemoryBuffer *linear_memory_buffer)
{
    linear_memory_buffer->current_offset_in_bytes = 0;
}


typedef struct point_t {
    float x, y;
} point_t;


typedef struct circle {
    point_t center_pt;
    float radius;
} circle_t;



#define BACKING_MEMORY_SIZE 1024

int main(){
    unsigned char backing_memory[BACKING_MEMORY_SIZE];

    LinearMemoryBuffer lmb = LinearMemoryBuffer_init(backing_memory, BACKING_MEMORY_SIZE);

    size_t num_guids = 10;

    unsigned long *guid_array = LinearMemoryBuffer_alloc(&lmb, sizeof(unsigned long) * num_guids);

    size_t num_points = 5;

    point_t *points_array = LinearMemoryBuffer_alloc(&lmb, sizeof(point_t) * num_points);

    size_t num_circles = 6;

    circle_t *circles_array = LinearMemoryBuffer_alloc(&lmb, sizeof(circle_t) * num_circles);

    for(int i = 0; i < num_guids; i++)
    {
        guid_array[i] = i * 10;
    }


    for(int i = 0; i < num_points; i++)
    {
        points_array[i].x = i * 100;
        points_array[i].y = i * 1000;
    }

    for(int i = 0; i < num_circles; i++)
    {
        circles_array[i].center_pt.x = i * 10;
        circles_array[i].center_pt.y = i * 20;
        circles_array[i].radius      = i;
    }


    for(int i = 0; i < num_guids; i++)
    {
        printf("guid_array[%d] = %ld\n", i, guid_array[i]); 
    }


    for(int i = 0; i < num_points; i++)
    {
        printf("points_array[%d].x = %f, points_array[%d].x = %f \n", i, points_array[i].x, i, points_array[i].y );
    }

    for(int i = 0; i < num_points; i++)
    {
        printf(
            "circles_array[%d].center_pt.x = %.2f, circles_array[%d].center_pt.y = %.2f, circles_array[%d].radius = %.2f \n", 
            i, 
            circles_array[i].center_pt.x, 
            i, 
            circles_array[i].center_pt.y,
            i,
            circles_array[i].radius
        );
    }
    

    LinearMemoryBuffer_free(&lmb);
}