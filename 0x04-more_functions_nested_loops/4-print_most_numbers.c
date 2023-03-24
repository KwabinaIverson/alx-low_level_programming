#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 without 2 and 4
 *
 * Return: Void
 */
void print_most_numbers(void)
{
int c;
for (c = 0, c <= 9; c++)
{
if (c != 2 || c != 4)
{
_putchar(c);
}
}
_putchar('\n');
}
