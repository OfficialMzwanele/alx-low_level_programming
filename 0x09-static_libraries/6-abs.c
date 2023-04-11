#include "main.h"

/**
 * _abs - a funtion that prints an absolute value of a number
 * @na: integer input
 * Return: Always 0
 */

int _abs(int na)
{
	return (na * ((na > 0) - (na < 0)));
}
