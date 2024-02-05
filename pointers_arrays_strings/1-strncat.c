#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - aims to concatenate 2 strings with a limiter
 *
 * @dest : the destination string 1
 * @src : the source string 2 which will appended to string 1
 * @n : number of character limit
 *
 * Return: the destination pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, srclen, k, limit, temp;

	/*declare variables for string length storage*/
	j = 0;
	k = 0;
	srclen = 0;
	limit = n;

	/*runs while loop through destination string*/
	while (dest[j] != '\0')
	{
		j++;
	}

	/*runs while loop through src*/
	while (src[srclen] != '\0')
	{
		srclen++;
	}

	/*checks if srclen is greater than limit*/
	if (srclen > limit)
	{
		temp = limit;
	}
	else
	{
		temp = srclen;
	}

	/*copying src to dest until limit*/
	while (k != temp)
	{
		dest[j] = src[k];
		j++;
		k++;
	}

	return (dest);
}
