#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 * This code prints all alphabets in small letter then in CAPITAL
 */

int main(void)
{
	int ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
	putchar(CH);
	putchar('\n');
	getchar();
	return (0);
}
