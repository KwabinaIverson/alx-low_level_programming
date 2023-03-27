#include "main.h"

/**
* _strlen - finds the length of a string
*
* @s: char string
*
* Return: The length of the string
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
