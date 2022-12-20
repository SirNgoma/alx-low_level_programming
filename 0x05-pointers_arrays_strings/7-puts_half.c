#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string to be worked
 * Return: half string
 **/

void puts_half(char *str)
{
	int i = 0;
	int j = i / 2;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		j++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');

}
