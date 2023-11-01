#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : string
 * Return : lenght of s
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return(0);
	return(_strlen_recursion(s + 1) + 1);
}
