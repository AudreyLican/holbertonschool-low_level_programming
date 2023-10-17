/**
* print_alphabet - function print entry point
*
* Description: print the alphabet in lowercase
*/
void	print_alphabet(void)
{
	char	lowercase;

	lowercase = 'a';
	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');;
}
