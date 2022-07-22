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
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
