#include "main.h"

/**
 *
 *
 *
 *
 */

void print_alphabet_x10(void)
{
	char i, j;
	int a = 0;

	while (a <= 11)
	{
		for (i = 'a'; i<='z'; i++)
		{
			for (j= 'a'; j <= 'z'; j++)
			{
				_putchar(j);

			}
			_putchar('\n');

		}

		++i;

	}
}
