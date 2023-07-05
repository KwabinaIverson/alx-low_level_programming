#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop from the top of the list
 * @head: Pointer pointer tot the head address
 *
 * Return: Integer
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
