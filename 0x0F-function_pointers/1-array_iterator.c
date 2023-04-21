#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function given as a parameter on each element
 * @array: There array to iterate
 * @size: The size of arrayy
 * @action: Pointer function
 * Description: Iterate through an array using the pointer function action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
