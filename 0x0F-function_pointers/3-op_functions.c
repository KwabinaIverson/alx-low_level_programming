#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Added number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts to integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication of two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Number of times b went into a
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Module of two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
