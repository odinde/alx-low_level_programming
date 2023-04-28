#include "main.h"

/**
 * _isdigit - chech if a character is a digit
 * @c: the number to be checked
 * Return: 1 for character that will bea digit r 0 for any else
 */
int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
