#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: Initialstring
 * @s2: String to concatenate
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t totalLen = len1 + len2 + 1;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";

	char *concatenated = malloc(totalLen * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	memcpy(concatenated, s1, len1);
	memcpy(concatenated + len1, s2, len2);
	concatenated[totalLen - 1] = '\0';

	return (concatenated);
}
