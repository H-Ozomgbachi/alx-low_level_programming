#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: node pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int nodesCount = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodesCount++;
	}
	return (nodesCount);
}
