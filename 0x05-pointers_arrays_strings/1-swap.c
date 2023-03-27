#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: this is a parameter to change.
 * @b: this is another parameter to change.
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
