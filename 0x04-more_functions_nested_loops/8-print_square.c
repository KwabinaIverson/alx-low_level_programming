#include "main.h"

/**
 * print_square - Print square
 *
 * @size: The of the square
 */
void print_square(int size)
{
if (size <= 0)
{
putchar('\n');
return;
}
for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
