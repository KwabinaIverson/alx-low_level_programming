#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts looped listint
 * @head: Pointer to the head node
 *
 * Return: Node address
 */
size_t looped_listint_count(listint_t *head)
{
        listint_t *t = head, *h = head;
        size_t node = 1;

        if (head == NULL || head->next == NULL)
        {
                return (0);
        }

        while (h && h->next)
        {
                t = t->next;
                h = (h->next)->next;

                if (t == h)
                {
                        t = head;
                        while (t != h)
                        {
                                node++;
                                t = t->next;
                                h = h->next;
                        }

                        t = t->next;
                        while (t != h)
                        {
                                node++;
                                t = t->next;
                        }

                        return (node);
                }
        }

        return (0);
}

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
        size_t nodes, ind;
        listint_t *mp;

        nodes = looped_listint_count(*h);

        if (nodes == 0)
        {
                for (; h != NULL && *h != NULL; nodes++)
                {
                        mp = (*h)->next;
                        free(*h);
                        *h = mp;
                }
        }
        else
        {
                for (ind = 0; ind < nodes; ind++)
                {
                        mp = (*h)->next;
                        free(*h);
                        *h = mp;
                }
        }

        return (nodes);
}
