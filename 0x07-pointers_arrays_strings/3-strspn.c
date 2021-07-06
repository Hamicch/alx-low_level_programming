#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - Get the length of a prefix substring
 *
 * @s: The character to print
 *
 * @accept: Character
 *
 * Return: unsigned int
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
			accpet++;

			s++;
		}
		if (*accept == '\0')
			break;
	}
	return (count + 1);
}
