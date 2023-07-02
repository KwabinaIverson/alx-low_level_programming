#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node the end of the list
 * @head: Pointer to Pointer of the head
 * @str: New string to put in the node
 *
 * Return: New node
 */
ist_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	 new = malloc(sizeof(list_t));
	 if (!new)
		 return (NULL);
	  new->str = strdup(str);
	  new->len = len;
	  new->next = NULL;
	  if (*head == NULL)
	  {
	  	*head = new;
		return (new);
	  }
	  while (temp->next)
		  temp = temp->next;
	  temp->next = new;
	  return (new);
}
