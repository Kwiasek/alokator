#include "heap.h"

void * heap_start = NULL;

int heap_setup(void) {
    if (heap_start != NULL) return -1;
    heap_start = custom_sbrk(HEAP_SIZE);
    if (heap_start == (void *) - 1) return -1;
    return 0;
}
void heap_clean(void) {
    if (heap_start == NULL) return;
    memset(heap_start, 0, HEAP_SIZE);
    custom_sbrk(-HEAP_SIZE);
    heap_start = NULL;
}
void* heap_malloc(size_t size) {

}
void* heap_calloc(size_t number, size_t size);
void* heap_realloc(void* memblock, size_t count);
void  heap_free(void* memblock);
size_t heap_get_largest_used_block_size(void);
enum pointer_type_t get_pointer_type(const void* const pointer);
int heap_validate(void);