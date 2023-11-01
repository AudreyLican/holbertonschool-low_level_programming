#include "main.h"

/**
 * _pow_recursion - function that returns the value of x 
 * raised to the power of y
 * @x : interger value
 * @y : integer value
 * Return: 
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* means error */
	else if (y == 0)
		return (1); /* any number raised to the power of 0 is 1 */
	else if (y == 1)
		return(x);
	return (x * _pow_recursion(x, y - 1));
}
