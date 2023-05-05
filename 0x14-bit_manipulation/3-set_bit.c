#include "main.h"

/**
 * set_bit - sets the bits of an integer at a given index
 * @n: The integer to change
 * @index: The position to change its value
 *
 * Return: -1 if failed else 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1ul << index);
	return (1);
}
