#include "main.h"
#include <stdio.h>

/**
 * _strlen - string lenght
 * @s: string
 * Return: lenth of a string
 **/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
