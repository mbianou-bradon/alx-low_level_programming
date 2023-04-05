#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint - function that frees a listint_t list.
* @head : pointer
*/

void free_listint(listint_t *head)
{
	listint_t *aux;
	listint_t *temp;

	aux = head;
	while (aux)
	{
		temp = aux->next;
		free(aux);
		aux = temp;
	}
}
