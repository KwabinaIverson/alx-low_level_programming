#include "hash_tables.h"

/**
 * hash_table_print - prints elements in the hash table
 * @ht: The address to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *item;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			first = 0;
			item = item->next;
		}
	}
	printf("}\n");   
}
