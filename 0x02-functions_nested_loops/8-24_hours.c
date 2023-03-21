#include "main.h"
/**
 * jack_bauer - a function that prints all minutes of the day
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * the for loop exit before 24:00
 * Return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h > 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
