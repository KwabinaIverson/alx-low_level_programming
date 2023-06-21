#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name from a pointer function
 * @name: The variable pointer to print
 * @f: Pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
