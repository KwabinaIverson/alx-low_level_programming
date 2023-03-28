#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* rev_string - Prints a string in reverse, followed by a new line.
*
* @s: Pointer to the string to be printed in reverse.
*/
void rev_string(char *s)
{
int len = strlen(s);
int i, j;
char temp;
for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
