#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98.
 *
 * @n - The starting point (first number to be printed).
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
