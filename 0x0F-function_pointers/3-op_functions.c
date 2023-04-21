#include "3-calc.h"
#include "functions_pointers.h"
#include <stdio.h>

/**
 * op_add - addition of two integers
 * @a: Integer to add
 * @b: Integer to add
 *
 * Return: The addition of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The difference between a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: Integer to multiply
 * @b: Interber to multiply
 *
 * Return: The multiplied number
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division
 * @a: Integer to divide
 * @b: Integer to divide with
 *
 * Return: The division of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - returns remainder of a division
 * @a: Integer to divide
 * @b: Interger to divide with
 *
 * Return: Remainder
 */
int op_mod(int a, int b)
{
return (a % b);
}
