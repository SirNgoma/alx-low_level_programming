#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a ch in a string
 * @s: string
 * @c: char
 * Description: same as function
 * Return: zero
 **/

char *_strchr(char *s, char c)
{
	int i;

	for ( i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
