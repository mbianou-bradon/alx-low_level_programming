#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints strings
* @separator : string
* @n : number of arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *resul;

	va_start(p, n);
	for (i = 0 ; i < n ; i++)
	{
		resul = va_arg(p, char *);
		if (resul == NULL)
			printf("(nil)");
		if (resul != NULL)
		printf("%s", resul);

		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
