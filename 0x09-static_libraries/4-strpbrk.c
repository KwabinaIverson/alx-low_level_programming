#include "main.h"

/**
 * _strpbrk - finds character and matches it
 * @s: Pointer string
 * @accept: Pointer string
 *
 * Return: Null
 */
char *strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
