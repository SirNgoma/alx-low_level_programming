#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	int len = strlen(b);
	unsigned int result = 0;

	for (int i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		results = results * 2 + (b[i] - '0');
	}

	return results;
}
