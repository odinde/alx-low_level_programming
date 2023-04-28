#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * followed by new line
 * Return: 0
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
