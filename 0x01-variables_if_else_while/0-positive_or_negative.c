#include <stdio.h>
/**
 * main - entry
 * Return: Always 0
 * This code tells whether the number is negative, zero or positive.
 */

int main(void)
{
	int n;

	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
return (0);
}
