#include "main.h"

/**
 * get_endianness - check endianness
 * Return: character
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
