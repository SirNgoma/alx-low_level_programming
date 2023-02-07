#include <stdio.h>

void hart(void)__attribute__((constructor));

/**
 * hart - prints something
 */

void hart(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
