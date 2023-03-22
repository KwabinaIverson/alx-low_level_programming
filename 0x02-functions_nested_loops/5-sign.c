#include "main.h"

/**
 * print_sign - int type and arguement of int type
 *
 * Description: n is an arguement of int in print_sign functions
 *
 * Return: + and 1 if n is greater than 0, 0 if n is equal to 0, and
 * - and -1 if n is less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
