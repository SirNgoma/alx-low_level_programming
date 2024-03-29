#include "lists.h"



/**
 * pop_listint - deletes the head node
 * @head: pointer
 * Return: deleted head
 **/

int pop_listint(listint_t **head)
{
	listint_t *next;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (data);
}
