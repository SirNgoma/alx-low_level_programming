#include "main.h"

/**
 * *_strcat - conc a strung
 * @dest: string 1
 * @src: string 2
 * Return: none
 **/

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (i);
}
