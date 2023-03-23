#include "main.h"

/**
 * print_to_98 - returns nothing and takes and argument of int type
 *
 * @n: The starting point of printing natural numbers
 *
 * Description: Prints natural numbers from n to 98
 *
 * Return: Returns nothing
 */
void print_to_98(int n)
{
if ( n <= 98)
{
while (n <= 98)
{
_putchar(n + '0');
n++;
}
}
else if (n >= 98)
{
while (n >= 98)
{
_putchar(n + '0');
n--;
}
else
{
_putchar(n + '0')
}
}
