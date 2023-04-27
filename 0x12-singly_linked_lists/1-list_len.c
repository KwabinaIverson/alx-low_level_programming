#include "lists.h"

/**
 * list_len - number of elements in the linked list
 * @h: Pointer to the node
 *
 * Return: The length
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
