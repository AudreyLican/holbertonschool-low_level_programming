#include "main.h"
/**
* _islower - check if char given is lowcase or not
* 
* @c : parameter is a int character
*
* Return: 1 if yes, and 0 for no
*
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
