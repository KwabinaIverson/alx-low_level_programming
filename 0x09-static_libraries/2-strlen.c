#include "main.h"

/**
 * _strlen - return the length of a given string
 * @s: The string to find lenth of
 *
 * Return: Lenth of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
