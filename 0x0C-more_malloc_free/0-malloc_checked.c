#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - function that allocates memory using malloc
* @b : value in
* Return: pointer to the allocate memory if fails.
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *d;

	d  = malloc(b);

	if (d == NULL)
		exit(98);

	return (d);
}
