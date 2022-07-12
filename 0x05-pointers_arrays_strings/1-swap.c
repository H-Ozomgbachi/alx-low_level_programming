#include "main.h"

/**
 * swap_int - swap integer
 * @a: first param
 * @b: second param
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
