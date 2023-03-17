#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (error)
 */
int main(void)
{
  const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  ssize_t len = sizeof(str) - 1;

  /* Use the write system call to print to stderr */
  if (write(2, str, len) != len)
    return (1);

  return (1);
}

