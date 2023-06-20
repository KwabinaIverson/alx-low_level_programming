#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the new dog created
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
