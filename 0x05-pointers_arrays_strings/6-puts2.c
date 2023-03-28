#include "main.h"

/**
 * print_every_other - prints in 2s
 *
 * @s: The string to print
 */
void print_every_other(char *s)
{
int i = 0;
while (*s[i] != '\0')
{
_putchar(s[i]);
i += 2;
}
_putchar('\n');
}
