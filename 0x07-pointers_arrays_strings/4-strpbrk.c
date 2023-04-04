#include "main.h"
#include <stddef>

/**
 * _strpbrk - searches for char accept in char *s
 * @s: The string to search in
 * @accept: The string to search for
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
char *s_ptr, *accept_ptr;
for (*s_ptr = s; *s_ptr != '\0'; *s_ptr++)
{
for (*accept_ptr = accept; *accept_ptr != '\0'; *accept_ptr++)
{
if (*s_ptr == *accept_ptr)
{
return (char *)s_ptr;
}
}
}
return (NULL);
}
