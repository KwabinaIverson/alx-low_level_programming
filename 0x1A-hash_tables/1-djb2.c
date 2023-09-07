#include "hash_tables.h"

/**
 * hash_djb2 - takes a string and produce 32-bit hash value
 * @str: Address to the string
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++) != '\0')
		hash = (hash * 33) + c;
	return (hash);
}
