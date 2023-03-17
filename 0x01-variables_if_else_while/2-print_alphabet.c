#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 * This code prints all alphabets
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar ('\n');
	getchar();
	return (0);
}
