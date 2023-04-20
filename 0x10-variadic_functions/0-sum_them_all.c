#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all integers
 * @n: The number of parameter
 * @...: Number of parameter to calculate
 *
 * Return: if n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ab;
unsigned int i, add = 0;
va_start(ab, n);
for (i = 0; i < n; i++)
{
add += va_arg(ab, int);
}
va_end(ab);
return (add);
}
