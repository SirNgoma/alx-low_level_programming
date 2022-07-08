#include "main.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
*/

void print_most_numbers(void)
{
	int i =48;

	while (i < 58)
	{
		if(i==50 || i==52)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}

}
