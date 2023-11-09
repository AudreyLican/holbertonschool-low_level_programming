#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1 : first string
 * @s2 : string that follow the 1st sting
 * @n : first given byte of s2
 *
 * Return: pointer on array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2, size;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	size = len1 + n;

	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + n] = '\0';

	return (str);
}

/**
 * _strlen - function that returns the length of a string
 * @s : pointer
 *
 * Return: return value
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
