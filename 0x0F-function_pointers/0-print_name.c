#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: The name to print
 *
 * @f: A callback function that prints @name
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
