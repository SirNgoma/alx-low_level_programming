#include "main.h"

/**
 * strncat - join a strnig
 * @n : num of strin
 * @dest: ddsxvg
 * @src: souredd
 * Return: none
 **/

char *strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while ((*dest + i) != '\0')
	{
		i++;
		j++;
	}
	i = 0;
	while ((*src + i) != src[n])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
