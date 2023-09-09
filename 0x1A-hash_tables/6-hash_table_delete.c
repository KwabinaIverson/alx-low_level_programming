#include "hash_tables.h"

/**
 * hash_table_delete - deletes from the hash table
 * @ht: The address to the table to delete element from
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *next;
	hash_node_t *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}
	free(ht->array);
	free(ht);
}
