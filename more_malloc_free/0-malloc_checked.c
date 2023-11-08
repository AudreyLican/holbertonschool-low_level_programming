#include "main.h"

/**
 * *malloc_checked - fucntion  that allocates memory using malloc
 * @b : size to allocate - memory size
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
