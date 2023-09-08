#include "hash_tables.h"

/**
 * key_index - gives the index of the key
 * @key: Key of the hash
 * @size: Size of the table
 * Return: The index of the stored Key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;

	index = hash_djb2(key) % size;
	return (index);
}
