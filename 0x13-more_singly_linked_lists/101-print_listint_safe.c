#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head, *prev;
while (current != NULL)
{
count++;
printf("[%p] %d\n", (void *)current, current->n);
prev = current;
current = current->next;
if (current >= prev)
{
printf("-> [%p] %d\n", (void *)current, current->n);
exit(98);
}
}
return (count);
}

