#include <stdio.h>

/**
 * beforeMain - Runs before the main fucntion
 * Return: Returns a string
 */

void beforeMain() __attribute__((constructor))
{
	printf ("You're beat! and yet, you must allow,\n%s",
			"I bore my house upon my back!\n");
}
