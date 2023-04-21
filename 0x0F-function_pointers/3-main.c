#include <stdio.h>
#include "function_pointers.h"

/**
 * main - performs simple operations on two numbers.
 * @argc: the number of arguments passed to the program.
 * @argv: an array of strings containing the arguments.
 *
 * Return: 0 if successful, 98, 99, or 100 otherwise.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*op_func)(int, int);
if (argc != 4)
{
print("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op_func = get_op_func(argv[2]);
if (op_func == NULL)
{
print("Error\n");
exit(99);
}
result = op_func(num1, num2);
print("%d\n, result);
return (0);
}
