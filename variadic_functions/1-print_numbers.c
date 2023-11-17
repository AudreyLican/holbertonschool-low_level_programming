#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator : separtor between the numbers
 * @n : num to print
 *
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pn;

	if (n > 0)
		va_start(pn, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pn, int));
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(pn);

	printf("\n");
}
