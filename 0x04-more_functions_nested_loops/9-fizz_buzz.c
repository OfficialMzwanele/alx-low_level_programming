#include <stdio.h>
/**
 * main - entry point
 * Description: prints FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%i", n);

		if (n < 100)
			printf(" ");
		else
			printf("\n");
	n++;
	}
	return (0);
}
