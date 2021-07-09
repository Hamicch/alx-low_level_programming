#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: An array of integers
 *
 * @m: The number of elements to swap
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0; j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
