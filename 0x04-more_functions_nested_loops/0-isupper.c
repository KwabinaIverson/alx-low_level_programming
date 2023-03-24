#include "main.h"
#include <stdio.h>

/**
 * _isupper - returns int type and takes int c as argument
 *
 * @c: The character to if its A-Z
 *
 * Return: 1 if true els 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
