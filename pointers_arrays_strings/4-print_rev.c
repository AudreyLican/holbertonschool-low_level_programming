#include "main.h"

/**
* print_rev - function that prints a string, in reverse
* @s : pointer on char
*
*/
void print_rev(char *s)
{
	int	length;

	while (s[length] != '/0')
	{
		length++;
	}

	for (length -= 1; s[length] >= 0; len--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
