#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: node param
 * @str: string param
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = (*head);

	if (!new_node)
		return (NULL);
	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (!(*head))
	{
		(*head) = new_node;
		return;
	}
	while (last->next)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
