#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all prints anything
 * @format: Types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list ab;
va_start(ab, format);
char a;
int b, c = 0;
float d;
char* p;
while (format[c] != '\0')
{
switch (format[c])
{
case 'a':
a = (char) va_arg(ab, int);
printf("%c", a);
break;
case 'b':
b = va_arg(ab, int);
printf("%d", b);
break;
case 'd':
d = (float) va_arg(ab, double);
printf("%f", d);
break;
case 'p';
p = va_arg(ab, char);
if (p == NULL)
{
printf("nil");
}
else
{
printf("%s", p);
}
break;
default:
break;
}
c++;
}
printf("\n");
va_end(ab);
}
