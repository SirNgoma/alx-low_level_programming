#include "main.h"
#include <stdio.h>

/**
 *
 * reverse_array - reverses an array
 *
 * @a: first pointer parameter
 *
 * @n: second pointer parameter
 * Return: Always(0) Success
 *
 **/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
	
		j--;
	}

}
