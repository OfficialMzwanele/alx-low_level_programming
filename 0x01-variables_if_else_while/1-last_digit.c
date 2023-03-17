#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Entry point
 * Return: Always 0
 * This code assesses the last digit of the entered number.
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	/*Finding the remainder of the given number by dividing 10*/
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and greater than 5", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
