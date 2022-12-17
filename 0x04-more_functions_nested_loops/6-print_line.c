#include "main.h"

/**
 * print_line - print lins
 * @n: param
 * Return: something you must see
 **/

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
