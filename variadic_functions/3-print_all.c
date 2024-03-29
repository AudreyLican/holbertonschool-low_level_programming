#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format : the type of arguments passed
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i;
	char *a;

	va_start(args, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	i = 0;
	while (format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			a = va_arg(args, char *);
			if (!a)
				a = "(nil)";
			printf("%s", a);
			break;
		}
		if (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
