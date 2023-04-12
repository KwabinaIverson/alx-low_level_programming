#include "mian.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: String to concatenate to
 * @s2: String to concatenate
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
concat = malloc(len1 + len2 + 1);
if (concat == NULL)
{
return (NULL);
}
strcpy(concat, s1);
strcpy(concat + len1, s2);
return (concat);
}
