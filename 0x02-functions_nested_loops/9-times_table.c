#include "main.h"

/**
 * times_table - has returns nothing
 *
 * Description: Print 9 times table
 *
 * Return: Returns notion
 */
void times_table(void)
{
int i = 0;
_putchar('0');
_putchar(' ');
_putchar('x');
_putchar(' ');
_putchar('9');
_putchar(' ');
_putchar('=');
_putchar(' ');
_putchar('0');
_putchar('\n');
i++;
while (i <= 10)
{
_putchar(i + '0');
_putchar(' ');
_putchar('x');
_putchar(' ');
_putchar('9');
_putchar(' ');
_putchar('=');
_putchar(' ');
_putchar(i * 9 + '0');
_putchar('\n');
i++;
}
}
