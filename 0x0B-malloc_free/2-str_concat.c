#include <stdlib.h>
#include "main.h"
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one
 * @s2: second input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *conct;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	conct = malloc(sizeof(char) * (i + j + 1));
	if (conct == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conct[i] = s2[j];
		i++;
		j++;
	}
	conct[i] = '\0';
	return (conct);
}
