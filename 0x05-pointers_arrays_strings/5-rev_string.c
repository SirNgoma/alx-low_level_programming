#include "main.h"
#include <stdio.h>

/*
 * rev_string - hd
 * @s: gg
 * Return: ff
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

int str_len(char *pointer)
{
	   int c = 0;
	    
	      while( *(pointer + c) != '\0' )
		            c++;
	       
	         return c;
}
