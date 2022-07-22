#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: zero on success
 */

int main(int argc, char **argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
