#include <stdio.h>

/**
 * main - print numbers in base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num;
	char ls;

	for (num = 0; num < 10; num ++)
		putchar((num % 10) + '0');

	 for (ls = 'a'; ls <= 'f'; ls ++)
		 putchar(ls);

	 putchar("\n");

	 return (0);
}
