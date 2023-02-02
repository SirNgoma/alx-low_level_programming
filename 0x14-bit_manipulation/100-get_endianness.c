#include "main.h"
#include <stdint.h>
#include <stdio.h>

/**
 * get_endianness -  find endiannesse
 * Description: check above
 * Return: int
 */

int get_endianness(void)
{
	uint32_t x = 1;
	char *c = (char *) &x;
	return (int) *c;
}
