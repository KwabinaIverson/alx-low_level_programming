#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create new object from struct dog
 * @name: First element in dog structure
 * @age: Second element in structure dog
 * @owner: Third element in structure dog
 *
 * Return: A structure dog type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog-name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog-owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
