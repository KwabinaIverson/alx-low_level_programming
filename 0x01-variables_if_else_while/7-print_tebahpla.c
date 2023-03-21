#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: Print z-a
 *
 * Return: 0 is success
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
