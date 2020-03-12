#include "3-calc.h"
/**
 * get_op_func - Operation Selector.
 * @s: String to check.
 *
 * Return: It returns a pointer toward operator given.
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 10)
	{
		if (ops->op[i] == s[0])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
