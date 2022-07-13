#include "main.h"
#include <stdio.h>

/**
 * rev_string - this reverse a  string
 * @s: gg
 * Return: ff
 *
 */
int str_len(char *);

void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = str_len(s);
	begin  = s;
	end    = s;

	for (c = 0; c < length - 1; c++)
		end++;
	for (c = 0; c < length / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}

/**
 * str_len - count string
 * @p: pointer string
 * Return: number
 */

int str_len(char *p)
{
	int c = 0;

	while (*(p + c) != '\0')
		c++;
	return (c);
}
