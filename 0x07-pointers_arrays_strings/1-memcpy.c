#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copy char*
 * @dest: 1st pointer
 * @src: 2nd point
 * @n: 3rd point
 *
 * Return: zero
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{ 
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
