#include "main.h"

/**
 * _isdigit - check if input is digit
 * @c : para to be checked
 * Return: one or zero
 **/

int _isdigit(int c)
{
	if ( c >= 48 && c <= 57 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
