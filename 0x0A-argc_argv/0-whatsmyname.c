#include <stdio.h>

/**
 * whatsmyname - A program that print its name followed
 * by a newline
 *
 * @argc: Argument character
 *
 * @argv: Argument variable
 *
 * Return: it's name
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
