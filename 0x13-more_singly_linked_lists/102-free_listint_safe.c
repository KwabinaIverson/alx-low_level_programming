#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *tmp;
size_t count = 0;
if (h == NULL || *h == NULL)
return (0);
current = *h;
while (current != NULL)
{
count++;
tmp = current;
current = current->next;
free(tmp);
if (tmp <= current)
break;
}
*h = NULL;
return (count);
}
