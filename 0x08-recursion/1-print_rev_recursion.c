#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: Pointer to the string
 *
 * Return: void
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_printf_rev_recursion(s + 1);
	_putchar(*s);
}
