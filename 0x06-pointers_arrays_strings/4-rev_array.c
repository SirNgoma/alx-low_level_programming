nclude "holberton.h"

#include <stdio.h>

/**
 *
 *  * reverse_array - reverses an array
 *
 *   * @a: first pointer parameter
 *
 *    * @n: second pointer parameter
 *
 *     *
 *
 *      * Description:n is  the # of elements
 *
 *       * Return: Always(0) Success
 *
 *        */

void reverse_array(int *a, int n)

{

		int hold, first, last;



			first = 0;

				last = n - 1;



					for (first = 0; first < last; first++, last--)

							{

										hold = *(a + first);

												*(a + first) = *(a + last);

														*(a + last) = hold;

															}

}
