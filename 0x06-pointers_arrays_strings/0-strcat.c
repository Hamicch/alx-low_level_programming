#include "holberton.h"
#include <stdio.h>

/**
 * length - length str
 * @dest: - pointer
 * Return: length (Success)
 */
int length(char *dest)
{
	return ((*dest != '\0') ? 1 + length(dest + 1) : 0);
}
/**
 * _strcat - ry point
 * @dest: pointer
 * @src: pointer
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *dest_itter = dest + legnth(dest);

	while (*src != '\0')
	{
		*dest_itter = *src;
		src = src + 1;
		dest_itter = dest_itter + 1;
	}
	*dest_itter = *src;

	return (dest);
}
