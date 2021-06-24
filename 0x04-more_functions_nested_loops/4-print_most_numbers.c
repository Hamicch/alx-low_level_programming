#include "holberton.h"

/**
 * print_most_numbers - Prints 0-9 leaving out 2 and 4.
 *
 * Return: 0-9
 *
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; x++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
