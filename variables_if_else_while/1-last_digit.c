#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = 0;

	x = n % 10;
	if (n < 0)
		printf("Last digit of %d is %d andis less than 6 and not 0\n", n, x);

	if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);

	else if (n > 0)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);

	return (0);
}
