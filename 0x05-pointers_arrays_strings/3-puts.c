#include "main.h"
#include <stdio.h>
/**
* _puts - finds the length of a string
*
* @str: char string
*
*/
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
