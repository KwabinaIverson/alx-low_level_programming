#include "main.h"
#include <stdio.h>

/**
 * func_name - prints the name function from the command line
 * @argc: Number of arguement
 * @argv: Array of argument
 *
 * Return: Always 0 (success)
 */
int  main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
