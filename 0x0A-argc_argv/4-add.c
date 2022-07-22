#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: zero on success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, temp;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (strcmp(argv[i], "0") == 0)
			continue;

		temp = atoi(argv[i]);

		if (temp == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += temp;
		}
	}
	printf("%d\n", sum);
	return (0);
}
