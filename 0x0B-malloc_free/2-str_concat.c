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
	size_t i;
	char *concatenated;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t totalLen = len1 + len2 + 1;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";

	concatenated = malloc(totalLen * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (i = 0; i < len2; i++)
		concatenated[len1 + i] = s2[i];
	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
