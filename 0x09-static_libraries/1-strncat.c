#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: First string
 * @src: Second string
 * @n: Number of bytes
 *
 * Return: The concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
