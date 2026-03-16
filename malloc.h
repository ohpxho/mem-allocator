#ifndef MALLOC_H
#define MALLOC_H

#include <stdlib.h>

// 24 bytes per block
// sz = 8
// next = 8
// prev = 8
// data offset = header addr + header sz
typedef struct {
  size_t sz;
  void *addr;
  void *next;
  void *prev;
} Heapblk;

void *imalloc(size_t sz);
void ifree();
void irealloc();
void icalloc();

#endif
