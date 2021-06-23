#include "holberton.h"

/**
 * islower - Checks for lower case
 *
 * Return - 1 if Successful
 * Return - 0 if failed
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return(1);
	else
		return(0);
}
