#include <stdio.h>
#include <stdlib.h>

/**
 * main - base 16
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
