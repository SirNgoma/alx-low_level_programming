#include <stdio.h>
#include <stdlib.h>
/**
 * main - Letters Again
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
