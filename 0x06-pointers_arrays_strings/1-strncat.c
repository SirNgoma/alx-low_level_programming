#include "main.h"

/**
 * strncat - join a strnig
 *@n : num of strin
 *@dest: ddsxvg
 @src: souredd
 *Return none
 **/

char *strncat(char *dest, char *src, int n)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while ((*src != '\0') && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (i);
}
