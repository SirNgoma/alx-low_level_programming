#include <stdio.h>
#include "dog.h"

/**
 * init_dog - init dof
 * @dog: dog struct
 * @name: name
 * @age: age
 * @owner: owner
 * Description: chech the above
 * Return: Zero
 **/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NUL)
	{
		return (NULL);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return my_dog;
}
