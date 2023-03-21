#include "main.h"

/**
 * _isalpha - a function that checks for lower and upper cases
 * @c: single letter input
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
		return (1);
}
