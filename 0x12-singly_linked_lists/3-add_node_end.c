#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds node to the end of a linked list
 * @head: pointer to pointer to the head of the list
 * @str: string added to the new list
 *
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_node;
return (new_node);
}
