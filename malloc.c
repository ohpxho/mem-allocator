#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>

typedef struct {
  size_t free_sz;
  size_t total_sz;
} heap_segm;

typedef struct {
  size_t sz;
  struct mem_chunk *next;
} mem_chunk_mdt;

typedef struct {
  struct mem_chunk *next;
  struct mem_chunk *prev;
} mem_chunk;

void *imalloc(size_t sz) {
  int pid = getpid();

  // void *haddr = mmap(hmd.addr, sz, PROT_WRITE | PROT_READ, MAP_SHARED, pid,
  // 0);

  return NULL;
}

void ifree() {}

void irealloc() {}

void icalloc() {}
