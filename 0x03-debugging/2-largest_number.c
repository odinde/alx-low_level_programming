#include "main.h"

/**
 * largest_num - returns the largest num of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest num
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	
	return (largest);
}
