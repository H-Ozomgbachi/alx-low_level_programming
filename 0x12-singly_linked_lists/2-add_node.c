#include "lists.h"

/**
 * add_node - add node
 * @head: reference to head node
 * @str: new node
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	while (str[len])
		len++;

	new_node->str = (char *)str;
	new_node->len = len;
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
