#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the num 612852475143
 * Return: 0
 */
int main(void)
{
	long m, maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (m = 1; m <= square; m++)
	{
		if (num % m == 0)
		{
			maxf = num / m;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
