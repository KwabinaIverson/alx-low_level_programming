#include "hash_tables.h"

/**
 * hash_table_get - get the value of a key
 * @ht: Address to the hash table to search
 * @key: The key of the value/ search with key
 * Return: The found value or NULl if key can't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* Casting key for "key_index" function */
	const unsigned char *key_c = (const unsigned char *)key;
	unsigned long int index;
	hash_node_t *item;

	/* Checks for empty key */
	if (key == NULL)
		return (NULL);
	index = key_index(key_c, ht->size);
	item = ht->array[index];

	/* compare the keys, if the same return value */
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	/* If key can't be found */
	return (NULL);
}
