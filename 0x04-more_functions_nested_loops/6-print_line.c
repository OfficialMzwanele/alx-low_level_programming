#include "main.h"
/**
 * print_line - function that prints straight line
 * @n: number of lines
 * Return: Always 0
 */

void print_line(int n)
{
	int nl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (nl = 1; nl <= n; nl++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
