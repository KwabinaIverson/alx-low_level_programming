#include "main.h"

/*
 * _islower - check if uppercase letters
 * @c: char to check
 *
 * Return: if uppercase return 1, also return 0
 */

int _islower(int c)
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
