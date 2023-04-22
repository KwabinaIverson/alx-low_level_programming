#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers taken from the CDL
 * @argc: The number of arguements from CDL
 * @argv: An array of vectors taken from CDL
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int mul, arg1, arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	mul = arg1 * arg2;
	printf("%d\n", mul);

	return (0);
}
