#ifndef __MAIN_H
#define __MAIN_H

#include <stdio.h>

/* function to print character */
int _putchar(char c);

/* function that checks for uppercase character */
int _isupper(int c);

/* function that checks for a digit (0 through 9) */
int _isdigit(int c);

/* function that multiplies two integers */
int mul(int a, int b);

/* function that prints the numbers, from 0 to 9 */
void print_numbers(void);

/* function that prints the numbers, from 0 to 9 whithout chosen digit*/
void print_most_numbers(void);

/* function that prints 10 times the numbers, from 0 to 14 */
void more_numbers(void);

/* function that draws a straight line in the terminal */
void print_line(int n);

/*function that draws a diagonal line on the terminal*/
void print_diagonal(int n);

/* function that prints a square */
void print_square(int size);

/* function that prints a triangle */
void print_triangle(int size);

/* function that prints an integer */
void print_number(int n);
#endif
