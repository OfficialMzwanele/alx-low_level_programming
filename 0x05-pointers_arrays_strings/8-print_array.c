#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints elements of an array og integers
 * @a: pointer input
 * @n: number of elements of the erray
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
