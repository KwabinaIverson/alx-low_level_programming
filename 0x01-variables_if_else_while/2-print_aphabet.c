#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: An array assign to variable letters, 0 is assigned to variable
 * i. While i <= 25 loop over letters.
 *
 * Return: 0 on success
 */
int main(void)
{
char letters[25] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i++ <= 25)
{
putchar(letters[i]);
}
return (0);
}
