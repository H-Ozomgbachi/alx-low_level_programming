#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 */

void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * main - check code
 * Return: Always 0.
 */

int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	return (0);
}
