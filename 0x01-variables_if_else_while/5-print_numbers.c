#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
