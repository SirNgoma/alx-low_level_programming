#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: array size
 * Description: read the function
 * Return: Zero
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{


		char *index;

			unsigned int x;



				if (nmemb == 0 || size == 0)

							return (NULL);



					index = malloc(nmemb * size);



						if (index == NULL)

									return (NULL);



							for (x = 0; x < (nmemb * size); x++)

									{

												index[x] = 0;

													}

								return (index);

}
