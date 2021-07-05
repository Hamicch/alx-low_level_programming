#include "holberton.h"

/**
 * _memcpy - Copies n bytes from source to destination
 * memory area
 *
 * @src: Source memory area
 *
 * @dest: Destination memory area
 *
 * @n: Number of bytes
 *
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
