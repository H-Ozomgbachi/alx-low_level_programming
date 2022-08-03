#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: given array
 * @size: size of array
 * @cmp: comparer function
 * Return: index of the number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = -1;

	if (!(array) || !(cmp) || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
		{
			res = i;
			break;
		}
	}

	return (res);
}
