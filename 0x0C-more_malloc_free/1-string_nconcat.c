#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: The string to concatenate
 * @s2: The string to conctenate
 * @n: Amount of memory in bytes
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
result = malloc(len1 + n + 1);
if (result == NULL)
{
return (NULL);
}
strncpy(result, s1, len1);
strncpy(result + len1, s2, n);
result[len1 + n] = '\0';
return (result);
}
