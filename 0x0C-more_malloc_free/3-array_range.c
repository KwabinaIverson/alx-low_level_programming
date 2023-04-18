#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 * Return: A pointer to the newly allocated array
 */
int *array_range(int min, int max)
{
int *arr;
int i, size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(size *sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}