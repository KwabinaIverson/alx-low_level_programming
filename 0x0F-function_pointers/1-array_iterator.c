#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - loop through arrays
 * @array: Pointer array to loop
 * @size: Size of array
 * @action: Pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
