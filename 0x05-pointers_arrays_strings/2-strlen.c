#include "main.h"

/**
 *  * _strlen - len of string
 *   *@s: string
 *    * Return: Always 0.
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	return (i);

}
