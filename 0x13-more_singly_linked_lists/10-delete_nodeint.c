#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a pointer to the first element of a linked list
 * @index: index of the node to delete, starting from 0
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL, *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	previous = *head;
	current = previous->next;

	for (i = 1; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
}
