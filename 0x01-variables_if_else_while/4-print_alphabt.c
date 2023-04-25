#include <stdio.h>

/**
 * main - print lowercase followed by new line
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar (ch);
	}
	putchar('\n');

	return (0);
}
