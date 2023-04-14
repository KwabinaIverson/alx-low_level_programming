#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocate a block of memory
 * @ptr: Pointer to the previous allocate memory
 * @old_size: Size for allocated space for @ptr
 * @new_size: New memory size to be allocated
 * Return: Void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size <= old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
for (i = 0; i < old_size; i++)
{
*((char *)new_ptr + i) = *((char *)ptr + i);
}
free(ptr);
return (new_ptr);
}
