#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - function that duplicates to new memory space location.
 * @str: char
 * Return: Always 0
 */
char *_strdup(char *str)
{
	int i, j;
	char *abc;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	abc = malloc(sizeof(char) * (i + 1));
	if (abc == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		abc[j] = str[j];
	}
	return (abc);
}
