#include "main.h"
#include <stddef.h>
/**
 * * rot13 - Encodes a string using ROT13.
 * * @s: The string to encode.
 * *
 * * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
int i, j;
char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13_alphabet = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; alphabet[j] != '\0'; j++)
{
if (s[i] == alphabet[j])
{
s[i] = rot13_alphabet[j];
break;
}
}
}
return (s);
}
