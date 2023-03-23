#include "main.h"
/**
 * print_numbers - a function that print numbers from 0 to 15
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, n = 0, m, j;

	while (n < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			m = i / 10;
			j = i % 10;

			if (i > 9)
			{
				_putchar (m + '0');
			}
			_putchar(j + '0');
		}
		_putchar('\n');
		n++;
	}
}
