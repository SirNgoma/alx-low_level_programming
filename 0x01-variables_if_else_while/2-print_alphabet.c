#include <stdio.h>
#include <stdlib.h>

/**
 * main -  alpha in lower cases
 *
 * Return: always zero
 **/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
