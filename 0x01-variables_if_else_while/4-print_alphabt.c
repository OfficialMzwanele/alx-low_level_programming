#include <stdio.h>
/**
 * main - Entry
 * this code prints all letters excluding e and q
 * Return: Always 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
