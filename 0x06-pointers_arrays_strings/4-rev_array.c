#include "main.h"

/**
 * reverse_array - reverse array of integers
 *
 * @a: the array to reverse
 *
 * @n: The number of items in the array
 */
void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; 1 < n; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
