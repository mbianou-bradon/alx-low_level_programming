#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* print_list - function that prints all the elements of a list_t list.
* @h : pointer to lists_t
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
