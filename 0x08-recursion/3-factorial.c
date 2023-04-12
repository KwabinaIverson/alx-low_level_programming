#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to find the factorial of
 *
 * Return: The factorial of the given number
 *         -1 if n is less than 0 (error)
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}