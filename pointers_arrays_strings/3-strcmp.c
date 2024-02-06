#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - aims to compare two strings or mimic the strcmp function
 *
 * @s1 : first string
 * @s2 : second string
 *
 * Return: determined value
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
if (s1[i] < s2[i])
	{
	return (s1[i] - s2[i]);
	}
else if (s1[i] > s2[i])
	{
	return (s1[i] - s2[i]);
	}
else
{
	return (0);
}
}
