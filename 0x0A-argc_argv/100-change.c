#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: zero on success
 */

int main(int argc, char *argv[])
{
	int n, res;

	if ((argc - 1) != 1)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[argc - 1]);
	if (n == 0)
	{
		printf("%d\n", n);
		return (0);
	}
	res = minimum(n);
	printf("%d\n", res);
	return (0);
}

/**
 * minimum - gets min number of cents
 * @n: integer param
 * Return: an int
 */

int minimum(int n)
{
	int min = n, i, temp, div;
	int arr[] = {25, 10, 5, 2, 1};

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	for (i = 0; i < 5; i++)
	{
		temp = n / arr[i];

		if (temp < 1)
			continue;
		else
		{
			if (min > temp)
			{
				min = temp;
				div = arr[i];
			}
		}
	}
	return (min + minimum(n % div));
}
