#include "holberton.h"

void print_string(char *str);

/**
 * main - Prints its name
 *
 * @argc: length of @argv
 *
 * @argv: Array of strings of the the program arguments
 *
 * Return: 0, Success
 */

int main(int argc __attribute__((unused), char *argv[])
{
	print_string(argv[0]);
	_putchar('\n');

	return (0);
}

/**
 * print_string - Prints all char of a string
 *
 * @str: Pointer to string
 *
 * Return: void
 */

void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
