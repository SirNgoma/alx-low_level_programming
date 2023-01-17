#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free dog
 *
 * @d: first parameter
 * Description: check function
 * Return: zero
 **/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
