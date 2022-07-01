#include <stdio.h>

/**
 * main - Entry point of the pplication
 * Code to print base 16 values
 * Returns - zero 0 (Success)
 */

int main(void)
{
	char x = '0';
	char y = 'z';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
