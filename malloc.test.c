#include "malloc.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  size_t sz = 16;
  void *test = imalloc(sz);

  if (test == NULL) {
    printf("failed\n");
    return -1;
  }

  printf("%p", test);
  return 0;
}
