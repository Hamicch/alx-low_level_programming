#include "holberton.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: destination string; src string is appended to it
 *
 * @src: source string; gets appended to dest string
 *
 * Return: Point to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
