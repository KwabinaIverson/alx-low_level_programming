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
char letters[] = "abcdefghijklm";
char letter2[] = "nopqrstuvwxyz";
int length1 = sizeof(letters) / sizeof(letters[0]);
int length2 = sizeof(letter2) / sizeof(letter2[0]);
int i = 0;
while (i <= lenght1)
{
putchar(letters[i]);
i++;
if (i == length1)
{
i = 0;
while (i <= lenght2)
{
putchar(letter2[i]);
i++;
}
}
}
return (0);
}
