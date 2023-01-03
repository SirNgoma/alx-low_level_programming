#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets length of a prefix substring
 *@s: string
 * @accept: strind
 * Return: zero
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
		if (accept[j] == s[i])
		{
			break;
		}
		j++;
	}
	if (!accept[j])
	{
		break;
	}
	i++;
	}
	return (i);
}
