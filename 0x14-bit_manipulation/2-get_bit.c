#include "main.h"

/**
 * get_bit - return the value of vit at a given index
 * @n: Integer to check
 * @index: Index of bit to find
 *
 * Return: Value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
