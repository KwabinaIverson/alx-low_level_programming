#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of integers
 * @min: Minimum range of integers
 * @max: Maximum range of integers
 *
 * Return: Pointer to the new array created
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		ptr[a] = min++;
	return (ptr);
}
