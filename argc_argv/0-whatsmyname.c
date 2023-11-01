#include "main.h"

/**
 * main - entry point
 * program that print its name
 * @argc : integer - nb argument
 * @argv : argument to print
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i;

	(void)argc;
	for (i = 0; argv[0][i]; i++)
		_putchar(argv[0][i]);
	_putchar('\n');

	return (0);
}
