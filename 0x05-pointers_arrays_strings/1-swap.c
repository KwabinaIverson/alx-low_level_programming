#include "main.h"

/**
 * swap_int - swap values of two variables
 *
 * @a: variable to swap its value
 *
 * @b: Variable to swap its value
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
int num1 = *a;
int num2 = *b;
*a = num2;
*b = num1;
}
