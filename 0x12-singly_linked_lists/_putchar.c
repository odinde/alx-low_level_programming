#include <stdio.h>
/**
 * _putchar - writes char c to stdiout
 * @c: the char to print
 * Return: on success 1
 * on error: -1 is returned and error is set appropriatly
 *
 */
int _putchar(char c);
{
	return (write(1, &c, 1));
}
