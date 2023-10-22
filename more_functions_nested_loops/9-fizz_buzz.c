#include <stdio.h>

/**
* main - entry point
* Description : program that prints the numbers from 1 to 100, and
* print Fizz for multiples of three print Fizz instead of the number
* and print Buzz for multiples of 5 print
* and for number which are multiples of both print FizzBuzz
*
* Return: Always 0
*/
int	main(void)
{
	int	i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
