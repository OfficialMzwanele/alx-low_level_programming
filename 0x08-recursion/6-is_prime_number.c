#include "main.h"
/**
 * prime2 - makes possible to evaluate 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: Always 0
 */
int prime2(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime2(a, b + 1));
}
/**
 * is_prime_numer - function that checks if a number is a prime
 * @n: integer input 
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, 2));
}
