#include "3-calc.h"

/**
 * op_add - adds integers
 * @a: first int
 * @b: second int
 *
 * Return: sum of the ints
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integers
 * @a: first int
 * @b: second int
 *
 * Return: difference of the ints
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: first int
 * @b: second int
 *
 * Return: products of the ints
 */

int op_mul(int a, int b)
{
	return(a * b);
}

/**
 * op_div - divides integers
 * @a: first int
 * @b: second int
 *
 * Return: result of the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return(a / b);
}

/**
 * op_mod - finds the reminder of dividing integers
 * @a: first int
 * @b: second int
 *
 * Return: reminder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return(a % b);
}
