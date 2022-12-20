#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints chars
 * @str: to be printed
 * Return: zero
 **/

void puts2(char *str)
{
	int i = 0;
	int a = 0;

	while (str[i] != "\0")
	{
		i++;
	}
	while (a < i)
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
