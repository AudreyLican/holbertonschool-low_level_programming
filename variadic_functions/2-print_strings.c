#include "function_pointers.h"

/**
 * print_strings -  function that prints strings
 * @separator : separator between the strings
 * @n : number of string passed on the function argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	char *str;
	va_list pstr;

	if (n > 0)
		va_start(pstr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pstr, char *);
		if (!str)
			printf("%s", "(nil)");
		printf("%s", str);

		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(pstr);

	printf("\n");
}
