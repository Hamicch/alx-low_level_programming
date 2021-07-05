#include "holberton.h"

/**
 * print_rev - Print a string in reverse
 *
 * @s The string to be printed
 *
 * Return: Void
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
