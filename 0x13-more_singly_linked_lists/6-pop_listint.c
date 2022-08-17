#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head param
 * Return: head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
