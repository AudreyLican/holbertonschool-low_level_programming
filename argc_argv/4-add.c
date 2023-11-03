#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c : given integer
 *
 * Return: 1 true (c is digit) otherwise 0 false (c is not digit)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * main - entry point
 * Description : program that adds positive numbers
 * @argc : number of arguments
 * @argv : given arguments
 * Return: 0  if success and 1 for error
 */
int main(int argc, char **argv)
{
	int	a, b, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (!_isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[a]);
	}

	printf("%d\n", res);
	return (0);
}
