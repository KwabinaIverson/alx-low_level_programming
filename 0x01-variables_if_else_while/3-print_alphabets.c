#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: Loop through three arrays to print the alphabets
 *
 * Return: 0 is success
 */
int main(void)
{
char letterA[] = "abcdefghijklmnopqr";
char letterB[] = "stuvwxyzABCDEFGHIJK";
char letterC[] = "LMNOPQRSTUVWXYZ";
int i = 0;
while (i <= 17)
{
putchar(letterA[i]);
i++;
if (i == 17)
{
i = 0;
while (i <= 18)
{
putchar(letterB[i]);
i++;
}
if (i <= 18)
{
i = 0;
while (i <= 14)
{
putchar(letterC[i]);
i++;
}
}
}
}
return (0);
}
