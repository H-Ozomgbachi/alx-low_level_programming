#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int k, value = 612852475143;

	for (k = 3; k < 500000; k = k + 2)
	{
		while ((value % k == 0) && (value != k))
			value /= k;
	}

	printf("%lu\n", value);

	return (0);
}
