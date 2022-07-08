#include "main.h"

/*
 * print_numbers - print numbets
 * 
 * Return: nothing
 */

void print_numberd(void)
{
	int i;
	
	for(i = 0 ; i <= 9 ; i++)
	{
		_putchar('%d', i);
	}
	_putchar('\n');
}
