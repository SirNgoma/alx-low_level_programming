#include "main.h"
#include <stdio.h>

/**
 * _strstr -  finds a substring
 *
 * @haystack: first parameter
 *
 * @needle: second parameter
 *
 * Return: Always(0) Success
 *
 **/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *fst_string = haystack;
	
		char *second_string = needle;

		while (*haystack && *second_string && *haystack == *second_string)
		{
			haystack++;

			second_string++;
		}
		if (!*second_string)
		{
			return (fst_string);
		}
		haystack = fst_string + 1;
	}
	return (NULL);

}
