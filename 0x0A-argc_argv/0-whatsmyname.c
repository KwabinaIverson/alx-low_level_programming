#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Pointer to array of arguments
 *
 * Retrun: 0 (Success);
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int length = strlen(argv[0]), i;

	for (i = 0; i < length; i++)
		_putchar(argv[0][i]);

	_putchar('\n');
	return (0);
}
