#include "main.h"

/**
* _abs - computes the absolute value of the integer
*
* @a : the parameter of this function is a integer
*
* Return: value if int is positive and value * -1 if negative
*/
int _abs(int a)
{
	if (a >= 0)
		return (a);
	return (a * -1);
}
