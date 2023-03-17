#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry
 * Return: Always 0
 * This code tells whether the number is negative, zero or positive.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
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
