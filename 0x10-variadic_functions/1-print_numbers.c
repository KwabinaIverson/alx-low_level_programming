#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers
 * @...: The variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ad;
unsigned int ind;
va_start(ad, n);
for (ind = 0; ind < n; ind++)
{
printf("%d", va_arg(ad, int));
if (ind != (n - 1) && seperator != NULL)
{
printf("%s", seperator);
}
}
printf("\n");
return (ad);
}
