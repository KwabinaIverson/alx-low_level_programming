#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integer
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value:  the value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;
	int found = 0;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			found = 1;
			break;
		}
		else
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}

	if (!found)
		return (-1);

	return (index);
}
