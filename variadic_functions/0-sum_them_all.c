#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum all its parameters
 * @n : integer to sum
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list pa; /* Declaring pointer to the argument list */

	sum = 0;
	if (n == 0)
		return (0);

	va_start(pa, n); /* Initializing arg. to the list pointer */
	for (i = 0; i < n; i++)
	/* Accessing current variable and pointing to the next one */
	{
		sum += va_arg(pa, int);
	}
	va_end(pa); /* Ending argument list traversal */
	return (sum);
}
