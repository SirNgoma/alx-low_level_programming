#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercases
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q')
		{
			letter++;
		}
		else if (letter == 'e')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
