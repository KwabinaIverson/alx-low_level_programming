#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string
 * @separator: String printed between strings
 * @n: The number of strings to pass
 * @...: Varirable number of strings to ve printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list my_string;
char *ptr;
unsigned int ind;
va_start(my_string, n);
for (ind = 0; ind < n; ind++)
{
ptr = va_arg(my_string, char *);
if (ptr == NULL)
{
printf("(nil)");
}
else
{
printf("%s", ptr);
}
if (ind != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(my_string);
}
