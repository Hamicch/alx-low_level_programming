#include "holberton.h"

/**
 * print_line - Draws a straight line on the terminal
 *
 * @n: Number of time sthe character '_' should printed
 *
 * Return: empty
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
