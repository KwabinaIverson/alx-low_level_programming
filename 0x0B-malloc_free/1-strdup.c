#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	dup = malloc(sizeof(char) * len);

	memcpy(dup, str, len * sizeof(char));
	free(dup);
	return (dup);
}
