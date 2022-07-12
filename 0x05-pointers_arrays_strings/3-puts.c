#include "main.h"
#include <stdio.h>

/**
 * _puts - prints chars
 * @str: string to be prinyed
 * Return: nothing
 */

int _puts(char *s)
{
	while (*s)
	{
		printf("%c", *s);
		*s++;
	} 
}
