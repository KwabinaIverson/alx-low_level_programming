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
int myInt = 0;
int i = 0;
while (i <= 9)
{
putchar(myInt);
myInt++;
i++;
}
putchar('\n');
return (0);
}
