#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int	main(void)
{
	char	low_case;

	low_case = 'a';
	while (low_case <= 'z')
	{
		if (low_case == 'e' || low_case == 'q')
			low_case++;
		putchar(low_case);
		low_case++;
	}
	putchar('\n');

	return (0);
}
