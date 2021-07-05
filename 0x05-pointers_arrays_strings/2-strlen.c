#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The character containing the string
 *
 * Return: The length of the character
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
