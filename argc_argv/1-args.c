#include "main.h"

/**
 * main - entry point
 * Description : program tthat prints the number of arguments
 * @argc : number of arguments passed
 * @argv : given arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
