#include <stdio.h>

/**
 * main - print single digit in base 10
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	putchar("\n");

	return (0);
}
