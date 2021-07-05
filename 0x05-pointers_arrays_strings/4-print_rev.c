#include "holberton.h"

/**
 * rev_string = reverse a string
 *
 * @s: String to be reversed
 *
 * Return: void
 */


void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
