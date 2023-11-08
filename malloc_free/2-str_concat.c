#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 * @s1 : pointer on destination of concat
 * @s2 : pointer on the string to copy
 * 
 * Return: s1
*/

char *str_concat(char *s1, char *s2)
{
	int	i, j, size, a;
	char	*s;

	if (s1 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		;

	if (s2 == NULL)
		return (NULL);
	for (j = 0; s2[j]; j++)
		;
	
	size = i + j;
	s = malloc(size * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		s[a] = s1[a];
	for (j = 0; a < size; j++, a++)
		s[a] = s2[j];
	
	s[a] = '\0';
	return (s);
}
