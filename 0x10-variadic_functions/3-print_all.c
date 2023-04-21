#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all prints anything
 * @format: Types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *ptr, *sep = "";
va_list ab;
va_start(ab, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(ab, int));
break;
case 'i':
printf("%s%i", sep, va_arg(ab, int));
break;
case 'f':
printf("%s%f", sep, va_arg(ab, double));
break;
case 's':
ptr = va_arg(ab, char *);
if (!ptr)
{
ptr = "(nil)";
}
printf("%s%s", sep, ptr);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
}
