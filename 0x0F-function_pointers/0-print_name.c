#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a string
 * @f: a callback function that prints @name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
