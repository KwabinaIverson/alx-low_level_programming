#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in list_t
 * @h: Pointer to List_t
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
