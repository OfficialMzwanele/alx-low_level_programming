#include "main.h"

/**
 * print_square - a function that prints a square
 * @sz: size of square
 * Return: void
 */

void print_square(int sz)
{
	int row, column;

	if (sz <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= sz; row++)
		{
			for (column = 1; column <= sz; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
