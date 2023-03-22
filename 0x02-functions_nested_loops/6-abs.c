#include "main.h"
#include <stdlib.h>

/**
 * _abs - returns and takes integer as an argument
 *
 * @n: n integer is return as an absolute value
 *
 * Description: n is return if it's greater than or equal to 0, and
 * n is multiplied by -1 if it's less than 0 before it's return
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
n *= -1;
return (n);
}
}
