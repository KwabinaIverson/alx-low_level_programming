#include "main.h"

/**
 * print_alphabet_x10 - prints the letters a-z ten times
 *
 * Return: The return value is void
 */
void print_alphabet_x10(void)
{
int times = 1;
while (times <= 10)
{
char myChar = 'a';
while (myChar <= 'z')
{
_putchar(myChar);
myChar++;
}
_putchar('\n');
times++;
}
}
