#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - function that prints a name.
* @name : name print
* @f : pointer called to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

		f(name);
}
