#include "main.h"

/**
* _puts -  function that prints a string
* @str : string
*/
void	_puts(char *str)
{
	int	i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * main - entry point
 * Description : program tthat prints the number of arguments
 * @argc : number of arguments passed
 * @argv : given arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int	count;

	for (count = 0; count < argc; count++)
	{
		_puts(argv[count]);
	}
	_putchar('\n');

	return (0);
}
