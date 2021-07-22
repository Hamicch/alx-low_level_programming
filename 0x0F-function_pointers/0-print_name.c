#include "function_pointers.h"

/**
 * print_name - Print a name
 *
 * @name: he name to be printed
 *
 * @f: Fucntion al pointers
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
