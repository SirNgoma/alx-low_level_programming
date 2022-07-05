#include <stdio.h>

/**
 * main - Hexa create Base16 numbe
 * Return: prints number zero - nine and alpha a-f
 */



int main(void)
{
	int base;
	char alph;
	
	for (base = 48; base <= 57; base++)
	{
		putchar(base);
	}
	for (alph = 97; alph <= 102; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
