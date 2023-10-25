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

#endif
