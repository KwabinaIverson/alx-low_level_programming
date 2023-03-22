#include "main.h"

/**
 * print_last_digit - return integer and takes integer as an argument
 *
 * @n: Get the last digit of integer n
 *
 * Description: Print the last digit of n
 *
 * Return: Character of last digit of n and return last digit of n
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit > 0)
{
_putchar(last_digit + '0');
return (last_digit);
}
_putchar(last_digit + '0');
return (last_digit);
}
