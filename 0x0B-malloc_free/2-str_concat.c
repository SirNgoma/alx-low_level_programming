#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - count str
 * @s : string
 * Description : above
 * Return: zero
 **/


int _strlen(char *s)
{
	int i;



	for (i = 0; s[i] != '\0'; i++)
	{
		return (i + 1);
	}

}
/**
 * *str_concat - concatenates two string
 * @s1: str 1
 * @s2: str 2
 * Return: zero
 **/

char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	i = _strlen(s1);

	if (s2 == NULL)
		s2 = "";
	j = _strlen(s2);

	dest = (char *)malloc((i + j - 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		dest[i + j] = s2[j];

	dest[i + j] = s2[j];

	return (dest);
}
