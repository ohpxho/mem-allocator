#include "malloc.h"
#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>

void *imalloc(size_t sz) {
  int pid = getpid();
  void *heapaddr = mmap(NULL, sz, PROT_READ | PROT_WRITE,
                        MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

  if (heapaddr == MAP_FAILED) {
    printf("fuck\n");
    return NULL;
  }

  const Heapblk mem = {
      .sz = sz,
      .addr = heapaddr,
      .next = NULL,
      .prev = NULL,
  };

  return heapaddr;
}

void ifree() {}

void irealloc() {}

void icalloc() {}
