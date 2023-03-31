#include "main.h"

/**
 * string_toupper - Change letters of a string to uppercase
 *
 * @n: The string to change
 *
 * Return: n
 */
char *string_toupper(char *n)
{
int i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
i++;
}
return (n);
}
