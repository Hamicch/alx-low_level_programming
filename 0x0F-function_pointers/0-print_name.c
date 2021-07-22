#include "holberton.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 *
 * @name: The name to print
 *
 * @f: function pointer
 *
 * Return: Nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name)
}
