#include "main.h"

/**
 * print_alphabet - prints alphanets
 * Return: rrtruns letter
 */

void print_alphabet(void)
{
	int ch;
	
	for (ch=97 ; ch<=122 ; ch++)
	{
		_putchar('%d',ch);
	}
	_putchar('\n');
	return (0);

}
