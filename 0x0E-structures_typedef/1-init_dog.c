#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing the elements of struct dog
 * @d: Pointer to struct dog
 * @name: Initializing the name in pointer d
 * @age: Initializing the age in pointer d
 * @owner: Initializing the owner field in pointer d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
