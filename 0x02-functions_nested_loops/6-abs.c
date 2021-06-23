#include "holberton.h"

/**
 * _abs - Prints the absolute value of a number
 *
 * Return: Always 0 (Success)
 */

int _abs(int)
{
	int a;
	
	a = _abs(-1);
	_putchar(a);

	a = _abs(0);
	_putchar(a);

	a = _abs(1);
	_putchar(a);

	a = _abs(-98);
	_putchar(a);

	return (0);
}
