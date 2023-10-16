#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int	main(void)
{
	char	low_case;
	char	up_case;

	low_case	= 'a';
	up_case	= 'A';
	while (low_case <= 'z')
	{
		putchar(low_case);
		low_case++;
	}

	while (up_case <= 'Z')
	{
		putchar(up_case);
		up_case++;
	}
	putchar('\n');

	return (0);
}
