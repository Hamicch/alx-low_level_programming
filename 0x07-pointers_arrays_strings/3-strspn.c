#include "holberton.h"

/**
 * _strspn - Get the length of a prefix substring
 *
 * @s: The character to print
 *
 * @accept: Character
 *
 * Return: Number of bytes in first segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int count;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				break;
			count++;
			accept++;

			s++;
		}
		if (*accept == '\0')
			break;
	}

	return (count + 1);
}
