#include "lists.h"

/**
 * list_len - list length
 * @h: node param
 * Return: length
 */

size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
