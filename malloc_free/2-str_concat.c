#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 * @s1 : pointer on destination of concat
 * @s2 : pointer on the string to copy
 *
 * Return: pointer to the new allocated space in memory, or NULL for error
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size, a, b;
	char *s;

	if (s1 == NULL)
		return ("");
	for (i = 0; s1[i]; i++)
		;

	if (s2 == NULL)
		return ("");
	for (j = 0; s2[j]; j++)
		;

	size = i + j + 1;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		s[a] = s1[a];
	for (b = 0; b < j; b++)
		s[a + b] = s2[b];

	s[a + b] = '\0';
	return (s);
}
