#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s1: pointer?
 * @s2: next pointer?
 *
 * Return: p - 1 - s1
 */

unsigned int _strspn(char *s1, char *s2)
{
	register const char *p = s1, *spanp;
	register char c, sc;

cont:
	c = *p++;
	for (spanp = s2; (sc = *spanp++) != 0;)
		if (sc == c)
			goto cont;
	return (p - 1 - s1);
}
