#include <stdio.h>
#include "main.h"

/**
 * print_alphabet  - check the code
 *
 * Return: Always 0.
 **/
void print_alphabet(void)
{
	int l = 97;

	while (l >= 122)
	{
		_putchar(l);
	}
	_putchar('\n');
}
