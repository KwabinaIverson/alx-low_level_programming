#include "main.h"

/**
 * _isalpha - return type of int and takes int type a an argument
 *
 * @c: is the character to be checked against conditional statements
 *
 * Description: Return 1 if c is or among a-z and A-Z, else return 0
 *
 * Return: Returns an int type
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
