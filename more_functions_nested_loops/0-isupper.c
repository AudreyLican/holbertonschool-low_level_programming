#include "main.h"

/**
* _isupper - function that checks for uppercase character
* @c : given integer
*
* Return: 1 true and 0 False
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
