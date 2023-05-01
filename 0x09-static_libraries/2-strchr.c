#include "main.h"

/**
 * _strchr - entry point
 * @s: character input
 * @c: second charcter input
 *
 * Return: 0
 */
char *_strchar(char *s, char c)
{
	int v = 0;

	for  (; s[v] >= '\0'; v++)
	{
		if (s[v] == c)
			return (&s[v]);
	}
	return (0);
}
