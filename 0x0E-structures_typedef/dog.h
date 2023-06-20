#ifndef DOG_H
#define DOG_H

/**
 * dog - a structure data type in C that has 3 members of elements
 */
struct dog {
	char *name;
	float *age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
