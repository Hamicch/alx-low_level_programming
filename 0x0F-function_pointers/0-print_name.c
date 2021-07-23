#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: Pointer to a string
 *
 * @f: A callback function that prints @name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
