#include <stdio.h>
#include "lists.h"

void __attribute__((constructor)) pre_main_func(void);

/**
 * pre_main_func - prints two string
 */
void pre_main_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
