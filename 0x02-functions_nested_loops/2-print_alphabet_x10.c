#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char x;

	for (ten = 0; ten <= 9; ten++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar('\n');
	}
}
