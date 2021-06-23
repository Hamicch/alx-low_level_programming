#include "holberton.h"

/**
 * _islower - Checks for lower case
 *
 * @c: Number to be checked
 *
 * Return - 0 (Failure) OR 1 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
