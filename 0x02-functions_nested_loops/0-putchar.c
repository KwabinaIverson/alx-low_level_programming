#include "main.h"

/**
 * main - entry point of the program
 *
 * Description: Putchar prints an array of characters using while loop
 *
 * Return: 0 is success
 */
int main(void)
{
char myWord[] = "_putchar";
int i = 0;
while (i <= 7)
{
putchar(myWord[i]);
i++;
}
putchar('\n');
return (0);
}
