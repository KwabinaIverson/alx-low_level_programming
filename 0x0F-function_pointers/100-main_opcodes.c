#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes the number of bytes from the command line as an arguement
 * @argc: The number of arguements form the command line
 * @argv: The arguements in an array
 *
 * Return: 0 (Success);
 */
int main(int argc, char *argv[])
{
	int num_bytes, index;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");

		exit(2);
	}

	for (index = 0; index < num_bytes; index++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);

		if (index == num_bytes - 1)
			continue;
		printf(" ");

		addr++;
	}

	printf("\n");

	return (0);
}
