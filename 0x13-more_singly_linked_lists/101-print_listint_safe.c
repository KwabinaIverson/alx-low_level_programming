#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts unique nodes
 * @h: A pointer to the listint_t to check
 *
 * Return: 0 or unique node
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *h, *t;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				node++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				node++;
				t = t->next;
			}

			return (node);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * peinr_listint_safe - prints listint_t
 * @head: A pointer to the head
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ind;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind = 0; ind < nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
