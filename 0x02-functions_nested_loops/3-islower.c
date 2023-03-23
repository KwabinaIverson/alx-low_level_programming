#include "main.h"

/**
 * _islower - returns a value based on c
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase and 0 if c is otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
