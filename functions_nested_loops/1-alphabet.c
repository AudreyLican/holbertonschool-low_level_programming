#include <stdio.h>
//#include <_putchar.h>
#include <unistd.h>

void	_putchar(char c)
{
	write(1, &c, 1);
}
/**
* Description: print the alphabet in lowercase
*/
void	print_alphabet(void)
{
	char	lowcase;

	lowcase = 'a';
	while (lowercase < 'z')
	{
		_putchar(lowcase);
		lowcase++;
	}
	_putchar('\n);

	return (0);
}
