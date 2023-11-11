#include "main.h"
#include <stdlib.h>

/**
* *argstostr - function that concatenates all the arguments of your program
* @ac : nb of argument of the program
* @av : arguments given in program
*
* Return: pointer to new string, or NULL if error
*/

char *argstostr(int ac, char **av)
{
	int	i;
	int	j;
	int	a;
	int	len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* calculate length of the concat string by summing the arguments */
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++; /* add +1 to len, for nb of newline characters */
	}
	len++;
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	a  = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[a] = av[i][j];
			a++;
		}
		str[a] = '\n';
		a++;
	}
	str[a] = '\0';
	return (str);
}
