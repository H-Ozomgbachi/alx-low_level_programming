#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * Print word
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";

	int i = 0;
	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
