#include <stdio.h>

/**
 * BeforeMain - Starts before the main fucntion
 * Return: Returns a string
 */

void __attribute__ ((constructor)) beforeMain()
{
	printf ("You're beat! and yet, you must allow,\n%s, I bore my house upon my back!\n");
}
