#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_calloc - function that allocates memory for an array, using malloc
* @nmemb :  array for allocate memory
* @size : bytes
* Return: if fail NULL / else if b
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = malloc(sizeof(char) * (nmemb * size));

	if (b == '\0')
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		b[i] = 0;
	}
	return (b);
}
