#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>



/**
 * add_nodeint - add new note
 * @head: address of head of lists
 * @n: pointer
 * Return: poiter
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
