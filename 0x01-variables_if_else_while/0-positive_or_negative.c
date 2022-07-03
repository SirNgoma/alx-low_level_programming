#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes here*/

/* betty style doc for function main goes there*/

/**
 * main - prints random number and prints if they are positi, negative or zero
 *
 * Return - positive if the number is positive. negative if the number is negative. zero if the number is zero
 * /

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
