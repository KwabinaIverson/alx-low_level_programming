#include "lists.h"

/**
 * sum_listint - add all data
 * @head: Address to the head
 *
 * Return: Added data
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		add += tmp->n;
		tmp = tmp->next;
	}

	return (add);
}
