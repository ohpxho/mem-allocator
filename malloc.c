#include <stdlib.h>
#include <unistd.h>

// 24 bytes per block
// sz = 8
// next = 8
// prev = 8
// data offset = header addr + header sz
typedef struct {
  size_t sz;
  void *next;
  void *prev;
} heapblk;

void *imalloc(size_t sz) {
  int pid = getpid();
  void *heapaddr;

  return NULL;
}

void ifree() {}

void irealloc() {}

void icalloc() {}
