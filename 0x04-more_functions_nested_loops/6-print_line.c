#include "main.h"

/**
 * print_line - print line base on a int n
 *
 * @n: Number of characters to print
 *
 * Retun: void
 */
void print_line(int n)
{
int min_line = 1;
if (n > 0)
{
while (min_line <= n)
{
_putchar('_');
min_line++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
