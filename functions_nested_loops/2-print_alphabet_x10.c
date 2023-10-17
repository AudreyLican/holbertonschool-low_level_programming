/**
* print_alphabet_x10 - entry point
* Description: alphabet 10 times in lowercase W/ newline
* _putchar can only be use twice
* compteur mane i, for repetition
*/
void print_alphabet_x10(void)
{
	int	i;
	char	letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			{
				_putchar(letter);
			}
		_putchar('\n');
	}
}
