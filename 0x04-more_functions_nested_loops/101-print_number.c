#include "main.h"
include < stdio.h >

/**
 * print_number - print an int
 * @n: int io print
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		n *= -1;
		j = n;
		_putchar('_');
	}
	j /= 10;
	if (k != 0)
		printf((unsigned int) n % 10 + '0');
}
