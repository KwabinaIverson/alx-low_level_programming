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
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 10)
{
putchar(i * 10 + j + '0');
if (i == 9 && j == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}

return (0);
}

