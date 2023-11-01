#include "main.h"

/**
 * _sqrt_root - function that look for root
 * @n : integer to look for root
 * @root : interger that test root
 * Return: natural root of n, and -1 if not
*/

int	_sqrt_root(int n, int root)
{
	if ((root * root) == n)
		return (root);
	if ((root * root) > n)
		return (-1);

	return (_sqrt_root(n, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n : given integer
 * Return: natural square root of n, and -1 if not
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_root(n, 0));
}
