#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
			continue;
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}

	return (0);
}
