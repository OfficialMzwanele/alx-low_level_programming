#include "main.h"
/**
 * print_most_numbers - a function that prints numbers to 9 besides 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i, n = 0;

	while (n < 1)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (i != '2' && i != '4')
			_putchar (i);
		}
		_putchar('\n');
		n++;
	}
}
