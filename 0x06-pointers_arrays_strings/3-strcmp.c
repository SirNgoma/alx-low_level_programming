#include "main.h"

/**
 * _strcmp - chrc code
 * @s1: str one
 * @s2: strctwo
 * Return: zero
 **/

int _strcmp(char *s1, char *s2)
{
	while ((*s != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
