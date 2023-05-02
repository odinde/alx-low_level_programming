#include <stdio.h>

/**
 * swap_int - swaps the value of two int
 * @a: first int
 * @b: second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* function that swaps two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
