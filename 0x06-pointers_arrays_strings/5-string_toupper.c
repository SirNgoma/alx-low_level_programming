#include "main.h"

/**
 * string_toupper - upprcase thevsyring
 * @s: string to b used
 * Return: zero
 **/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] = (s[i] - 32);
		}
		i++;
	}
	return (s);
}
