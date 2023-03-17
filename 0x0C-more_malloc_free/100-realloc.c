#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_realloc - function that reallocates a memory block using malloc and free
* @ptr : Pointer to the memory previously allocated
* @old_size : old size of memory
* @new_size : new size of memory
* Return: d or if fails NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *d;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	d = malloc(new_size);

	if (d == NULL)
		return (NULL);

	if (ptr == NULL)
		return (d);

	if (new_size > old_size)
		for (i = 0 ; i < old_size ; i++)
		{
			d[i] = ((char *)ptr)[i];
		}
	free(ptr);
	return (d);
}
