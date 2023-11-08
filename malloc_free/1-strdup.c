#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str : pointer to the sting to copy
 *
 * Return : copy of the string given as parameter
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *n;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		;

	n = malloc(j * sizeof(char) + 1);

	if (n == NULL)
		return (NULL);

	for (; str[i]; i++)
	{
		n[i] = str[i];
	}

	n[i] = '\0';
	return (n);
}
