#include "main.h"
#include <stdio.h>

/**
 * main - prints a fizz buzz program
 * Return: 0
 */
int main(void)
{
	int z;

	for (z = 1; z <= 100; x++)
	{
		if ((z % 3 ==0) && (z % 5 ==0))
		{
			printf("FizzBuzz");
		}
		else if (z % 3 == 0)
		{
			printf("Fuzz");
		}
		else if (z % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", z);
		}
		if (z != 100)
		{
			printf("");
		}
	}
	printf("\n");
	return (0);
}
