#include <stdio.h>

/**
 * main - Entry point
 * Print alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char ch2 = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
	{
		putchar(ch2);
	}
	putchar('\n');
	return (0);
}
