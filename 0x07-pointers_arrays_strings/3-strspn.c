#include "main.h"

/**
 * _strspn - Return number of byte in initial segment of s
 * @s: The string to scan
 * @accept: String to consider
 * Return: unsigned counnt
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
int found;
for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (found)
{
count++;
}
else
{
break;
}
}
return count;
}
