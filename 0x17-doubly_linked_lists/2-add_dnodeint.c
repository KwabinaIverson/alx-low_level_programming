#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds node to the beginning
 * @head: Pointer to the head pointer
 * @n: Element 
 * Return: New node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
 	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
