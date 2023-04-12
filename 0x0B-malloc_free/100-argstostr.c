#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenate all argument in the program
 * @ac: Number of arguments
 * @av: Argument vector
 * Return: Concatenated arguments
 */
char *argstostr(int ac, char **av)
{
int i, total_len, pos;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
total_len = 0;
for (i = 0; i < ac; i++)
{
total_len += strlen(av[i]) + 1;
}
str = malloc(total_len *sizeof(char));
if (str == NULL)
{
return (NULL);
}
pos = 0;
for (i = 0; i < ac; i++)
{
strcpy(str + pos, av[i]);
pos += strlen(av[i]);
str[pos++] = '\n';
}
str[pos] = '\0';
return (str);
}

