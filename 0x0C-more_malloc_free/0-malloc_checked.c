#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory
 * @b: integer
 * Description: above
 * Return: zero
 **/

void *malloc_checked(unsigned int b)
{
	int* allocated = malloc(b * sizeof(int));

	_putchar("%d", &allocated);
	return (0);
}
