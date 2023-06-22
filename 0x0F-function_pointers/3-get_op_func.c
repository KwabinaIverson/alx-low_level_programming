#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform
 * @s: The operation passed as a string argument
 *
 * Return: A pointer to the corresponding operator
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;
return (ops[i].f);
}
