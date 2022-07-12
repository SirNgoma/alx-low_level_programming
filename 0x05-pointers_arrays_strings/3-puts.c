#include "main.h"
#include <stdio.h>

/**
 * _puts - prints chars
 * @s: string to be prinyed
 * Return: nothing
 */

void _puts(char *s)
{
	while (*s)
	{
		printf("%c", *s);
	} 
}
