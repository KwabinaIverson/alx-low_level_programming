#include "hash_tables.h"

/**
 * hash_table_set - adds/insert to the hash table
 * @key: The key of the node
 * @value: The value of the node
 * Return: 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* casting "Key" to "const unsigned char" for function "key_index" */
	const unsigned char *key_c = (const unsigned char *)key;
	unsigned long int index = key_index(key_c, ht->size);
	hash_node_t *node = ht->array[index];

	/* Check if the key already exists */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* The key already exists, update the value */
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	/* The key does not exist, create a new node and add it to the list */
	node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
