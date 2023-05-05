#include "main.h"

/**
 * get_endianness - check if endiannes is small of capilat
 *
 * Return: 1 if small else 0
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char *)&n;

	if (*p == 1)
		return (1);
	else
		return (0);
}
