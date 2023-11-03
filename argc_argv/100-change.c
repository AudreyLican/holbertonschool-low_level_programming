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
	int	cents = atoi(argv[1]);
	int	change = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			change++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			change++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			change++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			change++;
		}
		else
		{
			cents -= 1;
			change++;
		}
	}

	printf("%d\n", change);
	return (0);
}

