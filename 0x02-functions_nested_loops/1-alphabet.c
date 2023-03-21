#include "main.h"

/**
 * print_alphabet - loops through the letters in the alphabet
 *
 * Return: it returns notion (void)
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

/**
 * main - entry point of the program
 *
 * Description: print_alphabet funtion is nested in main function
 *
 * Return: 0 is success
 */
int main(void)
{
print_alphabet();
return (0);
}
