#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies
 * @dest: copied
 * @src: to be copied
 * Return: value to dest
 **/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			return (dest);
		}
		i++;
	}
	return (dest);

}
