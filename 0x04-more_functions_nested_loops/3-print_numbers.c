#include "main.h"

/**
 * print_numbers - print the numbers since 0 up to 9
 * Return: the numbers since 0 up to 9
 */
void print_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		_putchar(m + '0');
	}

	_putchar ('\n');
}
