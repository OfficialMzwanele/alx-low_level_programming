#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int ch, n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
