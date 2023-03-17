#include <unistd.h>

/**
 * main - Entry point
 *
 * This program prints a message to the standard error.
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = 0;
while (str[len] != '\0')
{
len++;
}
write(STDERR_FILENO, str, len);
return (1);
}
