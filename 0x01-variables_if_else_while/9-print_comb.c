#include <stdio.h>
#include <stdlib.h>
/**
 * main - combo
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
