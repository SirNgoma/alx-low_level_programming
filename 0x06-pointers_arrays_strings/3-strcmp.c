#include "main.h"

/**
 * _strcmp - chrc code
 * @s1: str one
 * @s2: strctwo
 * Return: zero
 **/

int _strcmp(char *s1, char *s2)
{
	int i, output;

	i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s2 + i) && *(s1 + i) != '\0')
	{
		i++;
	}
	output = (*(s1 + i) - *(s2 + i));
	return (output);
}
