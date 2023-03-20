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
char letters[] = "abcdefghijklmno";
char letter2[] = "pqrstuvwxyz";
int i = 0;
while (i <= 14)
{
putchar(letters[i]);
i++;
}
while (i <= 10)
{
putchar(letter2[i]);
i++
}
return (0);
}
