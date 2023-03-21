#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: The prints numbers of base 16
 *
 * Return: 0 is success
 */
int main()
{
int i = 0;
while (i < 16) {
if (i < 10) {
putchar(i + '0');
} else {
putchar(i - 10 + 'a');
}
i++;
}
putchar('\n');
return (0);
}

