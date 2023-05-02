#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node
 * @head: Pointer to a pointer to the new node
 * @n: Integer value to be stored in node
 *
 * Return: New node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
