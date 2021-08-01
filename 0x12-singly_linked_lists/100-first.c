#include <stdio.h>

/**
 * startBeforeMain - Starts before the main fucntion
 * Return: Returns a string
 */

void startBeforeMain (void) __attribute__ ((constructor))
{
	printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
