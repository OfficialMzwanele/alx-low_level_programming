#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point
 * Description: This code checks more information on the number entered by user
 * Return: Always 0 (Success)
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
		printf("Last digit of %d is greater than 5", n);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is 0", n);
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("Last digit of %d is less than 6 and not 0", n);
	}
	return (0);
}
