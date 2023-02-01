#include "lists.h"
#include <stddef.h>

/**
 * freelist_int - free list int list
 * @head: adress of head
 * Description: check the func
 * Return: nothing
 **/

void free_listint(listint_t *head)
{
	listint_t *friend;

	while (head != NULL)
	{
		friend = head->next;
		free(head);
		head = friend;
	}
}
