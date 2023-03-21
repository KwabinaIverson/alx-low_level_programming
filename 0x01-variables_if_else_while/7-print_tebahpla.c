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
char c = 'z';
while (c >= 12)
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
