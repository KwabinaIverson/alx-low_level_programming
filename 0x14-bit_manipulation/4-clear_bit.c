#include "main.h"

/**
 * clear_bit -sets bit to 0 at a given index
 * @n: Number
 * @index: To clear
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
