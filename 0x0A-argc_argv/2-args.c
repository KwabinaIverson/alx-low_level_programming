#include "main.h"
#include <stdio.h>

/**
 * main - print the arguements taken from the command line on a new line
 * @argc: The number of arguements from the command line
 * @argv: An array containing arguements from the command line
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
