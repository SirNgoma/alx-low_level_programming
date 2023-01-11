#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array: create a arry of chars
 * @size: size of array
 * @c: char
 * Return: Zero
 **/

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int index;



	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);

}
