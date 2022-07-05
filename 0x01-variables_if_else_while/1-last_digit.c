#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/*
 * *main - random numbers and the last number
 * * Return: prints last number of the random number 
 * */


int main(void)
{
	    int n;
	        
	        srand(time(0));
			n = rand() - RAND_MAX / 2;
				/* your code goes there */
				
				int ln = n % 10;
					
					printf("The Last number of %d is %d", n, ln);
						if ( ln > 5)
								{
										        printf(" and is greater than 5");
												}
							else if ( ln == 0)
									{
											        printf(" and is zero");
													}
								else if (ln < 6 && ln != 0)
										{
												        printf(" and is less than 6 and is not equal to zero");
														}
									return (0);
}
