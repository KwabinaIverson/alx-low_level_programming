#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds a charcter in a string
 * @s: The string to search
 * @c: The character to search
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return s;
}
s++;
}
if (c == '\0')
{
return s;
}
return (NULL);
}
