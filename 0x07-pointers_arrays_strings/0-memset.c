#include "main.h"

/**
 * _memset - replaces the memory of s with b
 * @s: The pointer to replace
 * @b: The constant byte
 * @n: The number of bytes
 * Return: Pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
{
s[i] = b;
}
return (s);
}
