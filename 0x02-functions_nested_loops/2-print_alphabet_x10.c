#include "main.h"

/**
 * print_alphabet_x10 - primts alpha x10
 * Return: x10 Alphas
 */

void print_alphabet_x10(void)
{
	  char ch;

	  for (ch = 'a' ; ch <= 'z' ; ch++)
	  {
		  int r;
		  r = ch * 10;
		  _putchar(r);
	  }
	  _putchar('\n');

}
