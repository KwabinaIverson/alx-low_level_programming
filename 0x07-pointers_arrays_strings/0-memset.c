#include "main.h"

/**
 * _memset - replaces the memory of s with b
 * @s: The pointer to replace
 * @b: The constant byte
 * @n: The number of bytes
 * Description: Fills the buffer.
 * Return: Pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n-- > 0)
{
*p++ = b;
}
return (s);
}
