#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes the dog strcut variables
 *
 * @dog: The class
 *
 * @my_dog: An an instance of @dog class
 *
 * Return: 0 (Sucess)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return my_dog;
}
