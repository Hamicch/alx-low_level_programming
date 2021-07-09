#include "holberton.h"

/**
 * _strncat - Concatenates two strings using @n bytes
 *
 * @dest: Destination string; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * @n: Number of bytes of src that should be concatenated with dest
 *
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) == '\0';

	return (dest);
}
