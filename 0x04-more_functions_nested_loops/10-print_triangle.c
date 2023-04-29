#include "main.h"
/**
 * print_triangle - prints a triangle of squares according to the parameter
 * @size: the size of the square triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
		for (b = size - a; b > 1; b--)
		{
			_putchar(32);
		}
		_putchar('\n');
		}
	}
}
