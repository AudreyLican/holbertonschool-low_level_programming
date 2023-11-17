#include "3-calc.h"

/**
 * op_add - function that sum two integers
 * @a : num1
 * @b : num2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substract two integers
 * @a : num1
 * @b : num2
 *
 * Return: diffrence between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplcate two integers
 * @a : num1
 * @b : num2
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide two integers
 * @a : num1
 * @b : num2
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that five modulo of two integers
 * @a : num1
 * @b : num2
 *
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
