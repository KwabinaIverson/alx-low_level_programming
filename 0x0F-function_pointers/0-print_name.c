#include "function_pointers.h"

/**
 * print_name - print name
 * @name: The variable to print
 * @f: A function pointer that takes char as parameter
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
