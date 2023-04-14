#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - dynamically allocates memory
 * @b: The number of bytes
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr = mallac(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
