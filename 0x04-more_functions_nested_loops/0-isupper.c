#include <stdio.h>
#include "main.h"

/**
 * _isupper - check the code.
 *
 * Return: Always 0.
 **/

int _isupper(int c)
{
	if (c >= 65 || c <= 90)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
