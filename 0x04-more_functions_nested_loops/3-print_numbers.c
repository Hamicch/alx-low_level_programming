#include "holberton.h"

/**
 * print_numbers - Prints 0 - 9 
 * followed by a new line.
 *
 * Return: no value
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n')
}
