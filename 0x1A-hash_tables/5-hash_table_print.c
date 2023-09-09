#include "hash_tables.h"

/**
 * hash_table_print - prints elements in the hash table
 * @ht: The address to the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *item;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}
    
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			printf("{'%s': '%s'}, ", item->key, item->value);
			item = item->next;
		}
	}
	printf("\n");
}
