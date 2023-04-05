#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches char s for char accept
 * @s: The String used
 * @accept: The string used for search
 * Return: Pointer to s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
const char *s_ptr, *accept_ptr;
for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
{
for (accept_ptr = accept; *accept_ptr != '\0'; accept_ptr++)
{
if (*s_ptr == *accept_ptr)
{
return (char *)s_ptr;
}
}
}
return NULL;
}
