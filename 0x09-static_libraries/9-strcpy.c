#include "main.h"
#include <string.h>

/**
 * strcpy - copies string
 * @dest: Pointer to the destination
 * @src: Source of string
 *
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0, b = 0;
	
	while (*(src + a) != '\0')
	{
		a++;
	}

	for (; b < a; b++)
	{
		dest[b] = src[b];
	}

	dest[a] = '\0';
	return (dest);
}
