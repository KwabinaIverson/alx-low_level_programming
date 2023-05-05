#include "main.h"

/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: Integer to change
 * @index: The position to change value
 *
 * Return: 1 id it works else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
