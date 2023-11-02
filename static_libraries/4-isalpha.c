#include "main.h"

#include "main.h"

/**
* _isalpha - for alphabetic characters
* @c : character input in integer
*
* Return: 1 if true and 0 false
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

