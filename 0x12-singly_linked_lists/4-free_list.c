#include "lists.h"

/**
 * free_list - frees a function
 * @head: pointer to head
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
