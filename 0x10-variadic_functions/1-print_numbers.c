#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator : String
* @n : number of arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(p, int));

		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
