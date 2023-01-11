#include "main.h"

/**
 * *create_array: create a arry of chars
 * @size: size of array
 * @c: char
 * Return: Zero
 **/

char *create_array(unsigned int size, char c)
{
	int array[size];

	int i = 0;

	for (i; i <sizeof(array); i++)
	{
		array[i] = i;
		_putchar("%s", array[i]);
	}
	return (0);

}
