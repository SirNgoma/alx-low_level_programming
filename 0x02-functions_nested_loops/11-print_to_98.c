#include  "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints
 *
 *@n: paramr
 *Return: lots of n
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; ++i)
		{
			printf("%d, ", n++);
		}
	}
	else if (n >= 98)
	{
		int i;

		for (i = n; i >= 98; --i)
		{
			printf("%d, ", n--);
		}
	}
}
