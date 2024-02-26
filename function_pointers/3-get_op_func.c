#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Selects the function to perform
 * @s: operator.
 *
 * Return: Pointer to func
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int n = 0;

	while (n < 10)
	{
		if (s[0] == ops->op[n])
			break;
		n++;
	}

	return (ops[n / 2].f);
}
