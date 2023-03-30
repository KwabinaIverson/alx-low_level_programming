#include "main.h"

/**
 * _strncat - concatenate based two strings
 *
 * @dest: String to concatenate
 *
 * @src: String to concatenate
 *
 * @n: Number of bytes for src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while ((j < n) && (src[j] != '\0'))
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
