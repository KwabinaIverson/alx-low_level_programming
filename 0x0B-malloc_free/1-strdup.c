#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: String to duplicate
 * Return: Duplicate (dup)
 */
char *_strdup(char *str)
{
char *dup;
if (str == NULL)
{
return (NULL);
}
dup = malloc(strlen(str) + 1);
if (dup == NULL)
{
return (NULL);
}
strcpy(dup, str);
return (dup);
}
