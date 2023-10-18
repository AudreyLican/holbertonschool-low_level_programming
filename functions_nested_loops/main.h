#ifndef _MAIN
#define _MAIN

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	_putchar(char c);
void	print_alphabet(void);
void	print_alphabet_x10(void);
int	_islower(int c);
int	_isalpha(int c);

/*print the sign of a number*/
int print_sign(int n);

/*
* Calculation the absolute value of an integer
* The absolute value of a positive integer is equal to the integer itself
* On the other and, the absolute value of a negative integer is equal to the opposite of this value.
*/
int _abs(int);

/*print the last digit of a function*/
int print_last_digit(int);

/* prints every minute from 00:00 to 23:59 */
void jack_bauer(void);

#endif
