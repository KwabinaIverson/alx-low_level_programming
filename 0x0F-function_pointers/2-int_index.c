#include "function_pointers.h"

/**
 * int_index - searches for in integer and returns its index
 * @array: Pointer array to search
 * @size: Number of elements in the array
 * @cmp: Function pointer
 *
 * Return: 0 (If Success) else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
