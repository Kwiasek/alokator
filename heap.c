#include "heap.h"

#define PAGE_SIZE 4096
#define FENCE_SIZE 16
#define FENCE_PATTERN 0xaa

struct chunk_t {
    struct chunk_t *next;
    struct chunk_t *prev;
    size_t size;
    size_t checksum;
    int free;
};

struct heap_t {
    int size;
    void * start;
    struct chunk_t *first_chunk;
} heap;

int heap_setup(void) {
    heap.start = custom_sbrk(PAGE_SIZE);
    if (heap.start == (void *)-1) {
        return -1;
    }
    heap.size = PAGE_SIZE;
    heap.first_chunk = NULL;
    return 0;
}
void heap_clean(void) {
    
}
void* heap_malloc(size_t size) {

}
void* heap_calloc(size_t number, size_t size);
void* heap_realloc(void* memblock, size_t count);
void  heap_free(void* memblock);
size_t heap_get_largest_used_block_size(void);
enum pointer_type_t get_pointer_type(const void* const pointer);
int heap_validate(void);