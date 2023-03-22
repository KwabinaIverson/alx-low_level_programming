#include "main.h"

/**
 * print_last_digit - return integer and takes integer as an argument
 *
 * @n: Get the last digit of integer n
 *
 * Description: Print the last digit of n
 */
int print_last_digit(int n)
{
if (n % 10 >= 0 && n % 10 <= 9)
{
int remainder = n % 10;
//_putchar(remainder);
return (remainder);
}
else
{
int remain = n % 10;
//_putchar(remain);
return (remain);
}
}
