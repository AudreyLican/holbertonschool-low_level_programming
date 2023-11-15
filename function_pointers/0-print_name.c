#include "function_pointers.h"

/**
* print_name - fucntion that print name
* @name : name to print
* @f : pointer on a function of type char, to print with
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
