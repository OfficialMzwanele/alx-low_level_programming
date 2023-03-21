#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of the number
 * @n: number input
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		ld = (-1 * ld);
	}
	_putchar(ld + '0');
	return (ld);
}
