#include "main.h"

/**
 * _memset - replace ch with byte
 * @s: memory address of s
 * @d: value to replace
 * @n: num of char to replace
 * Return: zero
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *index = (char*s);

	for (i = 0; i < n; i++)
	{
		index[i] = b;
	}
	return (index);
}
