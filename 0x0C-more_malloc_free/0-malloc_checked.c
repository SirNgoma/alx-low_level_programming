#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory
 * @b: in to be2 alloc
 * Description: above
 * Return: zero
 **/

void *malloc_checked(unsigned int b)
{
	void *h_array;

	h_array = malloc(b);

	if (h_array == NULL)
	{
		exit(98);
	}

	return (h_array);
}
