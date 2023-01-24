#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"



/**
 * array_iterator - execute fuction on an array
 *
 * @array: array to operate on
 *
 * @size: size of array
 *
 * @action: fuction to execute
 *
 * Return: nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
