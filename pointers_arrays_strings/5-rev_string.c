#include "main.h"
void swap_int(int *a, int *b);
/**
* rev_string - function that reverses a string
* @s : pointer on char
*
*/
void rev_string(char *s)
{
	int	len, i;

	for (len = 0; s[len] != '\0'; len++)

	i = 0;
	/*for (i = 0, i < len / 2; i++)*/
	while (i < len / 2)
	{
		swap_int(&s[i], &s[len] - 1);
		/*a = &s[i];
		b = &s[j];

		temp = *a;
		*a  = *b;
		*b  = temp;
		j--;*/
		i++;
	}
}
