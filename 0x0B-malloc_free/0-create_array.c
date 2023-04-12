#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initialize it
 * @size: Size of array
 * @c: Character to initialize with
 * Return: The array of characters
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
{
return (NULL);
}
char *arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
