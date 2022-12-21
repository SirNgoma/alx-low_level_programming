#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints in diagonal
 * @n: length of diag
 * Return: zero
 **/

void print_diagonal(int n)
{
	int x, y;

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
