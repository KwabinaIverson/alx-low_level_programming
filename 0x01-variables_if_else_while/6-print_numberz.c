#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: Print from 0 - 9 using putchar
 *
 * Return: 0 is success
 */
int main(void)
{
int i = 0;
while (i <= 9)
{
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
