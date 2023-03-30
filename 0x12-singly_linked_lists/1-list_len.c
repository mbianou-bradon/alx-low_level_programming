#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* list_len - function that returns the number of elements in a linked
* @h : pointer
* Return: the number of elements in a linked
*/

size_t list_len(const list_t *h)
{
	unsigned int cont = 0;

	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
