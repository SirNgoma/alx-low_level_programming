#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Description: check above function
 * Return: zero
 **/

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = i; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
