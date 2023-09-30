#include "main.h"
/**
 * _strch - Entry point
 * @s: input
 * @c: input
 * Return: always 0 (success)
 */
char *_stchr(char *s, char c)
{
	int i = 0;

	for (;s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return(&s[i]);
	}return(0);
}
