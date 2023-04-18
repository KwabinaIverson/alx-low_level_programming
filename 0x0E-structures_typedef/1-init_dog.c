#include "main.h"
#include "dog.h"

/**
 * init_dog - uses struct to take information of a dog
 * @d: Pointer to the structure dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
