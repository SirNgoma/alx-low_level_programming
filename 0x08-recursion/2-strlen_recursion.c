#include "main.h"
#include <stdio.h>


/**
 * _strlen_recursion - returns the length of string
 * @s: string
 * Description: returns length of string
 *
 * Return: always 0
 *
 **/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}

}
