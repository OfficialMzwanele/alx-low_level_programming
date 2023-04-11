#include "main.h"
/**
 * _puts - entry point
 * Description: Prints a string.
 * @str: string input
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
