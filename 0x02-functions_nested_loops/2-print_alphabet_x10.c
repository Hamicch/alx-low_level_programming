#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		while(c < 10)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
