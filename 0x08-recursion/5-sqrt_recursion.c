#include "holberton.h"
/**
 * sqrt_check - Checks for the square root of c
 *
 * @g: Guess at sqrt
 *
 * @c: Number to find sqrt of
 *
 * Return: -1 or sqrt of c
 * 
 */

int sqrt_check(int g, int c)
{
	if (g * g = c)
		return (g);
	if (g*g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _squrt_recursion - Returns the natural square root of @n
 *
 * @n: The integer to find the sqrt of 
 *
 * Return: -1
 */

int _squrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));
}
