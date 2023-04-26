#include "main.h"

/**
 * _abs - compute the absolute value of an int
 * @c: the number to be computed
 * Return: absolute num of the value or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}

	return (c);
}
