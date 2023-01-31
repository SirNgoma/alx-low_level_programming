#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * free_listint2 - frees list int list
 * @head: address of head
 * Return: none
 **/

void free_listint2(listint_t **head)
{
	listint_t *friend;

	if (head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		friend = (*head)->next;
		free(*head);
		(*head) = friend;
	}
}
