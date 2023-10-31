#include "main.h"

/**
 * find_prime - searching for prime of n
 * @n : integer value given for cheking
 * @x : integer use to check prime
 * Return: 1 true(prime), and 0 false(not prime)
*/

int	find_prime(int n, int x)
{
	if (n % x == 0)
		return (0); /* if n is divisible by any num other than 1 and itself, it's not prime*/
	if ((x * x) > n)
		return (1);
	return (find_prime(n, x + 1));
}

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n : integer
 * Return: 1 is prime number and 0 ortherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, 2));
}
