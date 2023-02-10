#include <stdio.h>

/**
 * main - combination of poss num
 * @void : empty par
 * Description: check above
 * Return: zero
 */

int main(void)
{
	int i,j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if ((i < j) & (i <= '9'))
			{
				putchar(j);
				putchar(i);
				if ((j < '9') | (i < '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

