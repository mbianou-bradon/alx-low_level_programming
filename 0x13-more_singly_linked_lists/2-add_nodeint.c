#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - Function that adds a new node at the beginning of a list
* @head : pointer to head
* @n: integer
* Return: Address of new element or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
