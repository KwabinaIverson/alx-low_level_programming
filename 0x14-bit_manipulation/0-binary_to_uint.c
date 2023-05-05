#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert char to int
 * @b: A pointer to character variable
 *
 * Return: Return unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b >= 'a' && *b <= 'z')
			return (0);
		result = (result << 1) + (*b++ - '0');
	}

	return (result);
}
