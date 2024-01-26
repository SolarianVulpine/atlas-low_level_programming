#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 *
 * Return: 1 if c is digit, 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
