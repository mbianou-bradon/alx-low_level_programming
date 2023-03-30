#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* free_list - function that frees a list_t list.
* @head : pointer
*/

void free_list(list_t *head)
{
	list_t *liber, *temp;

	liber = head;
	while (liber)
	{
		temp = liber->next;
		free(liber->str);
		free(liber);
		liber = temp;
	}
}
