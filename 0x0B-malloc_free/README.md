# C - malloc, free
In C programming, dynamic memory allocation is a technique that allows a program to request memory from the operating system during runtime. The malloc() and free() functions are used to achieve this.

## malloc()
The malloc() function is used to allocate a block of memory of a specified size. It takes the number of bytes to be allocated as an argument and returns a void pointer to the first byte of the allocated memory block. The syntax of malloc() function is as follows:

```
void *malloc(size_t size);
```

Here, size is the number of bytes to be allocated. The malloc() function returns a void pointer to the first byte of the allocated memory block. If the allocation fails, it returns a null pointer.

For example, the following code snippet allocates a block of memory of size 10 bytes:

```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*) malloc(10 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    printf("Memory allocated successfully.\n");
    free(ptr);
    return 0;
}
```

## free()
The free() function is used to deallocate the memory previously allocated by the malloc() function. It takes a void pointer as an argument that points to the memory block to be deallocated. The syntax of free() function is as follows:

```
void free(void *ptr);
```

Here, ptr is the pointer to the memory block to be deallocated. After the memory is deallocated, the pointer ptr becomes invalid and should not be used again.

For example, the following code snippet allocates a block of memory of size 10 bytes and then deallocates it:

```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*) malloc(10 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    printf("Memory allocated successfully.\n");
    free(ptr);
    printf("Memory deallocated successfully.\n");
    return 0;
}
```

## Conclusion
Dynamic memory allocation using malloc() and free() functions is a powerful technique that can be used to allocate memory during runtime. However, it is important to ensure that the allocated memory is properly deallocated using the free() function to avoid memory leaks.
