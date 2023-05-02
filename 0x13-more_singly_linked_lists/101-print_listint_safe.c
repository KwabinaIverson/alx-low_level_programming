#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;

    while (head != NULL && head > head->next)
    {
        printf("[%p] %d\n", (void *) head, head->n);
        head = head->next;
        count++;
    }

    if (head != NULL)
    {
        printf("[%p] %d\n", (void *) head, head->n);
        count++;
        printf("-> [%p] %d\n", (void *) head->next, head->next->n);
    }

    return (count);
}
