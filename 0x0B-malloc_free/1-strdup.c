#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a nwl created space
 * @str: string
 * Return: zero
 **/

char *_strdup(char *str)
{
	char *duplicate;

	int i, len = 0;



	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));



	if (duplicate == NULL)
	{
		return (NULL);

	}

	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}

	duplicate[len] = '\0';

	return (duplicate);

}
