#include "main.h"

/**
 * leet - aims to exchange specific letters for numbers
 *
 * @s: pointer
 *
 * Return: (s)
 */

char *leet(char *s)
{
	int i = 0;
	char MDA[5][3] = {
		{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}};
	int r;

	while (*s)
	{
		for (r = 0; r <= 4; r++)
		{
			if ((MDA[r][0] == *s) || (MDA[r][1] == *s))
				*s = MDA[r][2];
		}

		s++;
		i--;

	}
	s += i;
	return (s);
}
