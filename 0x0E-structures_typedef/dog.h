#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - dog class
 *
 * @name: Name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	char *owner;
	int age;
};

void init_dog(struct dog *d, char *name, char *owner, float age);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, char *owner, int age);

#endif
