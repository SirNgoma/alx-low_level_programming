#include "main.h"

/**
 * abs -  abs main
 *
 * @i: inputd all
 * @r: resulr
 * Return: abs of a number
 **/
int _abs(int i)
{/* @r: internsl param */
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
