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
char letterA[] = "abcderghijklmnopqr";
char letterB[] = "stuvwxyzABCDEFGHIJK";
char letterC[] = "LMNOPQRSTUVWXYZ";
int lengthA = sizeof(letterA) / sizeof(letterA[0]);
int lengthB = sizeof(letterB) / sizeof(letterB[0]);
int lengthC = sizeof(letterC) / sizeof(letterC[0]);
int i = 0;
while (i <= lengthA - 1)
{
putchar(letterA[i]);
i++;
}
if (i == 19)
{
i = 0;
while (i <= lengthB - 1)
{
putchar(letterB[i]);
i++;
}
if (i == 20)
{
i = 0;
while (i <= lengthC - 1)
{
putchar(letterC[i]);
i++;
}
}
}

return (0);
}
