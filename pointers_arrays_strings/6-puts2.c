#include "main.h"

/**
* puts2 -  function that skipp digits
* every 2 characters
*
* @str : string value
*/
void puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
