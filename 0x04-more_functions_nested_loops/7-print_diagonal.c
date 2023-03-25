#include <stdio.h>

/**
 * print_diagonal - print in diagonal
 *
 * @n: Number of prints
 */
void print_diagonal(int n)
{
if (n <= 0)
{
putchar('\n');
return;
}
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
