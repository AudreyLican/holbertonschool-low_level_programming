#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Hello";
	char *p;

	p = string_toupper(s);
	printf("%s\n", p);
	printf("%s\n", s);
	return (0);
}
