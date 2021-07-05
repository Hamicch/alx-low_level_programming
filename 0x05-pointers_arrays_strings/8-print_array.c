#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print elements of an array
 *
 * @a: The array
 * @n: The number of elements in the array
 *
 * Return: void
 */

void  print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}

	printf("\n");
}
