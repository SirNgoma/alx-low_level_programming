#include "main.h"

/**
 * _abs -  abs main
 *
 * @i inputd all
 * @r - resulr
 * Return: abs of a number
 */

/*@i int i*/
int _abs(int i)
{
	int r;

	if (i < 0)
	{
		r = i * -1;
		return (r);
	}
	else if (i > 0)
	{
		r = i * 1;
		return (r);
	}
	else
	{
		return (i);
	}
}
