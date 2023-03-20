#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: The prints characters of the alphabet using putchar
 *
 * Return: 0 is success
 */
int main()
{
char letterA[] = "abcdfghijklm";
char letterB[] = "noprstuvwxyz";
int lengthA = sizeof(letterA) / sizeof(letterA[0]);
int lengthB = sizeof(letterB) / sizeof(letterB[0]);
int i = 0;
while (i <= lengthA - 1)
{
putchar(letterA[i]);
i++;
if (i == 14)
{
i = 0;
while (i <= lengthB - 1)
{
putchar(letterB[i]);
i++;
}
}
}
return (0);
}

