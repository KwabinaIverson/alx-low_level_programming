#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: The prints combination of singled-digit numbers
 *
 * Return: 0 is success
 */
int main(void)
{
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 10)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
putchar('\n');
j++;
}
i++;
}
return (0);
}

