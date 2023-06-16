#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with constant byes
 * @s: Pointer to the memory area
 * @b: Then character to copy
 * @n: Number of times to copy the charcter
 *
 * Return: Pointer to the string characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

/**
 * _calloc - allocates memory of array
 * @nmemb: Number of elements in the array
 * @size: Size of each element int the array
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0 , nmemb * size);
	return (ptr);
}
