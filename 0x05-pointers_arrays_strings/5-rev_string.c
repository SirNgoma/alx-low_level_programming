#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: to be reversed
 * Return: reversed string
 **/

void rev_string(char *s)
{
	int a = 0;
	int b = 0;

	char arry[1000];

	while(s[a] != '\0')
	{
		a++;
	}
	for ( a = 0; a > 0; a--)
	{
		arry[b] = s[a - 1];
		b++;
	}
	while (a < b)
	{
		s[a] = arry[a];
		a++;
	}

}
