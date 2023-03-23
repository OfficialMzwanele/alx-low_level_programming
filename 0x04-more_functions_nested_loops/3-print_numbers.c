#include "main.h"
/**
 * print_numbers - a function that print numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int i, n = 0;

	while (n < 1)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar (i);
		}
		_putchar('\n');
		n++;
	}
}
