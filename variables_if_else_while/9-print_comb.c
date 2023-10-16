#include <stdio.h>

/**
* main - Entry point
* Description : prints all possible combinations of single-digit numbers
* only with function putchar & only 4 times,
* no printf or puts etc.., in main fonction
*
* Return: 0
*/
int	main(void)
{
	int	digit;

	digit = 0;
	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit < 9)
		{
			putchar(44);	/*virgule*/
			putchar(32);	/*espace*/
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
