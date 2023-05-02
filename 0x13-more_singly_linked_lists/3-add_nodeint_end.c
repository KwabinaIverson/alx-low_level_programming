#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - sets new node at the end
 * @head: Pointer to a pointer to the head node
 * @n: Integer to be stored in node
 *
 * Return: Address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *lastNode = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}

	return (*head);
}
