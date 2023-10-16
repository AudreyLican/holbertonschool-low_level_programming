#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int	main(void)
{
	int	numbers;

	numbers = 0;
	while (numbers <= 9)
	{
		printf("%d", numbers);
		numbers++;
	}
	printf("\n");

	return (0);
}
