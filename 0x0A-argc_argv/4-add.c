#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - gets arguements from cmd a adds them
 * @argc: Arguement count
 * @argv: Array of arguements from cmd
 *
 * Return: Added arguements
 */
int main(int argc, char *argv[])
{
int sum = 0, i;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int j = 0;
while (argv[i][j])
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
