#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	print_list(head);
	return (0);
}
