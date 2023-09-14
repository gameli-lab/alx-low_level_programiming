#include "3-calc.h"


op_t ops[] = 
{
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

/**
 * get_op_func - get the right function
 * @s: string from which op is taken
 *
 * Return: Nothing
 */

int (*get_op_func(char *s))(int, int)
{
	for (int i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return ops[i].f;
		}
	}
	printf("Error\n");
	return (98);
}
