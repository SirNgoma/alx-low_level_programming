#include <unistd.h>
/**
 *  * _putchar - bha
 *   * @c: the char to print
 *    *
 *     * Return: on success
 *      */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
