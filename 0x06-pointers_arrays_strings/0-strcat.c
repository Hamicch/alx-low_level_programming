#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - ry point
 * @dest: pointer
 * @src: pointer
 * Return: Always 0 (Success)
 */

char *strcat(char *dest, char *src)
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
