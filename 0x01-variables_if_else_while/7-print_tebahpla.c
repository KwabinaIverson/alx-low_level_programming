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
char letterA[] = "zyxwvutsrqpon";
char letterB[] = "mlkjihgfedcba";
int i = 0;
while (i <= 12)
{
putchar(letterA[i]);
i++;
}
if (i == 12)
{
i = 0;
while (i <= 12)
{
putchar(letterB[i] + "\n");
i++;
}
}
return (0);
}
