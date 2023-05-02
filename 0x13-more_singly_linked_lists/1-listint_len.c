#include "lists.h"

/**
 * listint_len - returns the number of element
 * @h: Pointer to the head
 *
 * Return: Then counted element (count)
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
