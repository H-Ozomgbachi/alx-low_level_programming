#include "lists.h"

/**
 * listint_len - number of elements in a linked
 * @h: head of list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
