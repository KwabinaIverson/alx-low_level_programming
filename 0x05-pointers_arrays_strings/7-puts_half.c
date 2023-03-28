#include “main.h”

/**
 *  * puts_half - prints second half of a string 
 *   * @str: The string to print half of
 *    * Return: void
 *     */
void puts_half(char *str)
{
int len = 0;
while (*str[len] != ‘\0’)
{
len++;
}
if (len % 2 == 0)
{
int middle = len / 2;
for (int i = middle; i < len; i++)
{
_putchar(*s[i]);
}
}
else if (len % 2 == 1)
{
int half = (len - 1) / 2;
for (int i = half; i < len; i++)
{
_putchar(*s[i]);
}
}
}
