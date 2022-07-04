#include <stdio.h>

/**
 *  * main - Hexa create Base 16 numbers 
 *   * Return: prints number 0 - 9 and alpha a-f
 *    */



int main() {
	    
	    int base;
	        char alph;
		    
		    
		    for (base = 48; base <= 57; base++)
			        {
					            putchar(base);
						        }
		        for (alph = 97; alph <= 102; alph++)
				        {
						                putchar(alph);
								        }
			    
			    return 0;
}
