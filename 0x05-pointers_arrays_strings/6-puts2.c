#include "main.h"

/**
 * print_every_other - prints in 2s
 *
 * @s: The string to print
 */
void print_every_other(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s += 2;
}
putchar("\n");
}
