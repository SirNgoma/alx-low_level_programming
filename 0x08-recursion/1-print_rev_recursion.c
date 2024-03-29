#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print reverse of a string
 *
 * @s: string
 * Description: prints a string in reverse
 *
 * Return: always 0
 *
 **/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}

}
