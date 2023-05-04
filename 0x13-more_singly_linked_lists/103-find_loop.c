#include "lists.h"

/**
 * find_listint_loop - finds loop
 * @head: Pointe to the node
 *
 * Return: The address of the loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *s = head, *f = head;

    while (s && f && f->next)
    {
        s = s->next;
        f = f->next->next;

        if (s == f)
	{
            s = head;

            while (s != f)
	    {
                s = s->next;
                f = f->next;
            }

            return s;
        }
    }

    return NULL;
}
