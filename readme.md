# Memory Allocator

- Malloc returns size bytes of memory and returns a pointer to the allocated memory
- When malloc needs more memory from the system, it uses one of two system calls:
  1. **brk/sbrk** - Adjusts the program break (the end of the heap segment). This grows the heap linearly and is used for smaller allocations.
  2. **mmap** - Maps pages of memory directly from the OS. Typically used for large allocations (often >128KB, though this varies by implementation).
- When malloc has a chunk of memory from the OS, it maintains it using free list - data structure tracking which blocks are free vs allocated

> The mmap() system call is the modern mechanism used by the operating system kernel to allocate large blocks of memory dynamically, and it is the primary way the heap segment and other memory regions are managed in a process's virtual address space.

### Parts

1. **Header**: size and metadata(flags)
2. **Usable Memory**

### TODOs

1. I need to know how can I use heap segment for allocations
   - Use getpid to get the file descriptor id of the program
   - Use mmap to perform a system call to the os for reservation of a free memory block for the program (mmap is expensive as it requires a system call resulting to a context switch, that is why mmap is only use to allocate the heap segment then let the malloc do the management)
2. I have to setup the data structure for managing the heap

### Reference

1. https://medium.com/a-42-journey/how-to-create-your-own-malloc-library-b86fedd39b96
2. https://cs61.seas.harvard.edu/site/2025/Malloc/
