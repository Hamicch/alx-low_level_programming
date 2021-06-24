#include "holberton.h"

/**
 * *largest_number - returns the largest of  numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: larget number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest= a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
