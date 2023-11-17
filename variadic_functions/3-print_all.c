#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @char : argument
 * @format : the type of arguments passed
*/
void print_all(const char * const format, ...)
{
	unsigned int	i;
	char	*a, *separator;
	va_list	args;

	va_start(args, format);
	if (format)
	{
		i = 0;
		while (format[i])
		{
			switch (format[i])
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
			if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' 
				|| format[i] == 's' && format[i + 1] != '\0')
				printf(", ");
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
