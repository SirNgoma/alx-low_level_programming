#include <stdio.h>

/**
* main - create alphabets in reverse
* Return: prints lowercase alphabets in reverse
 */

int main(void)
{
	int r_alpha;

	for (r_alpha = 122; r_alpha >= 97; r_alpha--)
	{
		putchar(r_alpha);
	}
	putchar('\n');
	return (0);
}
