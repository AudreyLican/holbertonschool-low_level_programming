#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int	main(void)
{
	char	alpharev;

	alpharev = 'z';
	while (alpharev > 'a')
	{
		putchar(alpharev);
		alpharev--;
	}

	return (0);
}
