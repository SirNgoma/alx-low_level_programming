#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init dof
 * @dog: dog struct
 * @name: name
 * @age: age
 * @owner: owner
 * Description: chech the above
 * Return: Zerio
 **/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	//struct dog *my_dog;

	//my_dog = malloc(sizeof(struct dog));
	if (d == NUL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

	//return d;
}
