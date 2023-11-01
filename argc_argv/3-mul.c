#include "main.h"

/**
 * main - entry point
 * description : program that multiplies two numbers.
 * @argc : number of arguments
 * @argv : given arguments
 * Return: 1 if received less than 2 arg otherwise 0.
*/

int	main(int argc, char **argv)
{
	int	a, b;

	if (argc != 3)
		printf("Error\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}

	return (0);
}
