#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: Print the numbers from 0 - 9
 *
 * Return: 0 is success
 */
int main(void)
{
int i = 0;
char numbers[] = "0123456789";
while (i <= 9)
{
putchar(numbers[i]);
i++;
}
printf("\n");
return (0);
}
