#include "3-calc.h"
/**
 * get_op_func - pointer to function that selects
 * the right function to be performed
 * @s: operator selected by the user
 * Return: pointer to functiokn for the operator 
 * chosen by the user
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

	int i, res;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) === 0)
		{
			res = ops[i].f;
			return (res);
		}
	}
	return (NULL);
}
