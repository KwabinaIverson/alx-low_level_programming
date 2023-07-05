#include "lists.h"

/**
 * get_nodeint_at_index - returns node at nth node
 * @head: Pointer pointer to the head
 * @index: Index of the node
 *
 * Return: Node at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp ? tmp : NULL);
}
