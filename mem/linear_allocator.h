#include <stddef.h>

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
    linear_memory_buffer.
    linear_memory_buffer.current_offset_in_bytes = 0;
}