#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure data type in C that has 3 members of elements
 * @name: First element of struct dog
 * @age: Second element of struct dog
 * @owner: Third element of struct dog
 *
 * Description: This data type define variable name, age, and owner.
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};

/**
 * dot_t - an instance of struct do
 */
/* typedef struct dog dog_t; */

/*void init_dog(struct dog *d, char *name, float age, char *owner);*/
/*void print_dog(struct dog *d);*/
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/

#endif /* DOG_H */
