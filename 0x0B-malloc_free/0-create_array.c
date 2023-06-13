#include <stdlib.h>

/**
 * create_array - creates an array and initialize with a specific character
 * @size: Size of array
 * @c: Character to initialize
 *
 * Return: An array of characters
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		array[i] = c;
	return (array);
}
