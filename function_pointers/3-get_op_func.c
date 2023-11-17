#include "3-calc.h"

/**
* *get_op_func - function that selects the correct function to perform
* the operation asked by the user.
* @s: oprator passed as arguments to the program
*
* Return: pointer to fucntion corresponding to the operator given in paramter.
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
	int i;

	i = 0;
	while (ops[i].op)
	{
		//if (*s == *(ops[i].op))
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
