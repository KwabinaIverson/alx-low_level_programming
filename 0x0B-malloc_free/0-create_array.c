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
if (size == 0)
{
return (NULL);
}
char *arr = (char *) malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (unsigned int i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
