#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free memory
 * @head: The address to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
