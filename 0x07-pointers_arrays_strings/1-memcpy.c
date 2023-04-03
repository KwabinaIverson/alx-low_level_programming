#include "main.h"

/**
 * _memcpy - copies memory area src to dest
 * @dest: The pointer copy momery area to
 * @src: The pointer to copy
 * @n: Amount of memory to copy
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *myptr;
unsigned int i;
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
myptr = &dest[i];
}
return (myptr);
}
