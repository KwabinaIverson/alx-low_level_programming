#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguements from the command line
 * @argc: The number of arguements
 * @argv: The arguements in a pointer array
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int num_arg = argc - 1;

	printf("%d\n", num_arg);
	return (0);
}
