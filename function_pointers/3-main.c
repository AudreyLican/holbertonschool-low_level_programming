#include "3-calc.h"

/**
 * main - entry point
 * Description : program that sum 2 interger in parameter
 * @argc : number of arguments
 * @argv : given argument to sum
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	//int num1;
	//int num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit((98));
	}
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	//num1 = atoi(argv[1]);
	//num2 = atoi(argv[3]);
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
