#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

int _putchar(char c);

void reset_to_98(int *n);

/* function that swaps the values of two integers */
void swap_int(int *a, int *b);

/*  function that returns the length of a string */
int _strlen(char *s);

/* function that prints a string */
void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

/* function that prints half of a string */
void puts_half(char *str);

void print_array(int *a, int n);

/* function that copies the string pointed to, with nyll byte*/
char *_strcpy(char *dest, char *src);

/* function that convert a string to an integer */
int _atoi(char *s);

/* More pointers_arrays_strings */

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *);

char *cap_string(char *);

/* function that encodes a string into 1337 */
char *leet(char *);

/* function that encodes a string using rot13. */
char *rot13(char *);

/* function that prints an integer */
void print_number(int n);

/* Even more pointers, arrays and strings */

/* function that fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* function that copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* function that locates a character in a string */
char *_strchr(char *s, char c);

/* function that gets the length of a prefix substring */
unsigned int	_strspn(char *s, char *accept);

/* function that searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/*function that locates a substring*/
char *_strstr(char *haystack, char *needle);

/* function that prints the chessboard */
void print_chessboard(char (*a)[8]);

/* function that prints the sum of the two diagonals of a square matrix of integers */
void print_diagsums(int *a, int size);

#endif
