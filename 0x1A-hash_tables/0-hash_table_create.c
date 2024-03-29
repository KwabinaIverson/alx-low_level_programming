#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: The size of the hash table
 * Return: An address to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Allocates memory on the head for the table */
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* Initializing the fields in struct hash_table_t */
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	return (table);
}
