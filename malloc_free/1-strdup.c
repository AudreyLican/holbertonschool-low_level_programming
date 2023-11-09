#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str : pointer to the sting to copy
 *
 * Return: copy of the string given as parameter
 */

char *_strdup(char *str)
{
	int i, j;
	char *n;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	n = malloc(i * sizeof(char));
	if (n == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		n[j] = str[j];
	}

	n[j] = '\0';
	return (n);
}
