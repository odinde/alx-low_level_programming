#include "main.h"
/**
 * print_line - function that draws a straight line
 * in the terminal
 * @n: number of times the cgar is printed
 */
void print_line(int n)
{
	{
		int index = 0

			while (index < n)
			{
				_putchar('_');
				index++;
			}
		_putchar('\n');
	}
}
