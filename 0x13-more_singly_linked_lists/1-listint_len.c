#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - prinys num of nodes
 * @n: listint poiter
 * Return: num of nodes
 **/

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h ! = NULL)
	{
		h = h->next;
	}
	return (i);
}
