#include "holberton.h"

void print_string(char *str);

/**
 * main _ Prints its name
 *
 * @argc: Length of argv
 *
 * @argv: Arrays of strings of the program arguments
 *
 * Return: 0, Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print_string(argv[0]);
	_putchar('\0');

	return (0);
}

/**
 * print_string - Prints all char of a string
 *
 * @str: Pointer to string
 *
 * Return: void
 */

void print_string(char * str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
