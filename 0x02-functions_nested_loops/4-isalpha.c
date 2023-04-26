#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the char to be checked
 * Return: 1 for alphabetic char or 0 non alphabetic character
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
