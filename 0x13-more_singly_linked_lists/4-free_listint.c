#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free memory
 * @head: Pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *mp;

	while (head)
	{
		mp = head->next;
		free(head);
		head = mp;
	}
}
