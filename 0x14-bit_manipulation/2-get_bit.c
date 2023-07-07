#include "main.h"

/**
 * get_bit - return value of bit at given index
 * @n: The number to get its bit
 * @index: Index of bit
 * Return: Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
