#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - the function to recursively find x^y
 *
 * @x: the numeral to be provided
 * @y: the exponent numeral
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
