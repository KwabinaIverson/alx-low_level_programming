#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - print struct dog
 * @d: Pointer to print struct dog
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name? d->name: "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner? d->owner: "(nil)");
}
}
