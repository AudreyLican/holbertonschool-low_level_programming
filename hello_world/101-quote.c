#include <unistd.h>

/**
* ft_putstr - Entry point
*
* str: is string - return string
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '0')
	{
		write(1, str, 1);
		str++;
	}
}

/**
* main - Entry point
*
* Return: Always 1
*/
int	main(void)
{
	ft_putstr("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	return (1);
}
