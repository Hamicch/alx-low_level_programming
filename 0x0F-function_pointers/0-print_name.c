#include "holberton.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 *
 * @name: The name to print
 *
 * Return: Nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	printf("%s/n", name);
}
