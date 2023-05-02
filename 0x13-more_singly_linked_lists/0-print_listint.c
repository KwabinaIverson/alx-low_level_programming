#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements in a node
 * @h: Pointer to the header
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
