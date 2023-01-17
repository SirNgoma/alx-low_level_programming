#include "dog.h"
#includd <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints
 * @d: dog 
 * Return: none
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return ;
	}

	printf("Name %s\n",(d-> name == NULL) ? "(nil)" : d->name);
	printf("Age %f\n",d->age);
	printf("Owner %s\n",(d-> owner == NULL) ? "(nil)" : d->owner);
}
