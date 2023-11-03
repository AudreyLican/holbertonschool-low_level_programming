#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* Description : program that prints the minimum number of coins
* to make change for an amount of money.
* @argc : number of parameter - 1 argument allowed
* @argv : given int
*
* Return: 0 for success, and 1 for error
*/

int	main(int argc, char **argv)
{
	int	change, cents;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	for (change = 0; cents > 0; change++)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents <= 10)
		{
			cents -= 10;
		}
		else if (cents <= 5)
		{
			cents -= 5;
		}
		else if (cents <= 2)
		{
			cents -= 12;
		}
		else if (cents <= 1)
		{
			cents -= 1;
		}
	}
	printf("%d\n", change);
	return (0);
}
