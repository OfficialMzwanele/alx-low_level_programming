#include <stdio.h>
/**
 * main - Entry
 * this program prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */

int main(void)
{
	int n = 0;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	putchar('\n');
	return (0);
}
