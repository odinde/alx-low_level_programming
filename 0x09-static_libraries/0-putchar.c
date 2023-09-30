#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * return: on success 1.
 * on error, -1 is returnedand error is set appropriately.
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
