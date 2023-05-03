#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Head of the linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
