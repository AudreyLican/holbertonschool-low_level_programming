#include "main.h"

/**
* print_rev - function that prints a string, in reverse
* @s : pointer on char
*
*/
void print_rev(char *s)
{
	int	len;

	for (len = 0; s[len] != '\0'; len++)

	for (len = s[len]; s[len] >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
