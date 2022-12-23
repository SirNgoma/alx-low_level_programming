#include "main.h"

/**
 * cap_string - capitilize string
 * @s: string
 * Return: zero
 **/

char *cap_string(char *s)
{
	int i, j, k;
	char a[] = ",\t;\n;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		i = 0;
	
		if (j == 0)
		{
			i = 1;
		}
		else
		{
			for (k =0; s[k] != '\0'; k++)
			{
				if (s[j] - 1 == a[k])
				{
					i  = 1;
					break;
				}
			}
		}
		if (i == 1)
		{
			if (s[j] <= 'z' && s[j] >= 'a')
			{
				a[j] -= ('a' - 'A');
			}
		}
	}
	return (s);
}
