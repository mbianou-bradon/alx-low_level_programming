#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* add_node_end - function that adds a new node at the end
* @head : pointer double
* @str : name
* Return:  the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *aux;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[i] != '\0')
		i++;

	new->len = i;
	new->next = NULL;

	aux = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;

		aux->next = new;
	}
	return (new);
}
