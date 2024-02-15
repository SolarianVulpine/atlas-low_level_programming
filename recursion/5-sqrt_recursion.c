#include "main.h"
#include <stdio.h>

/**
 * sqrt_finder - aims to frind the square root of a numeral
 * @n : the provided numeral
 * @i : variable used to check if natural sqrt is possible
 *
 * Return : as defined by the function
 */

int sqrt_finder(int n, int j)
{
	if ((j ^ 2) == n)
	{
		return (j);
	}
	else if ((j ^ 2) > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_finder(n,(j + 1)));
	}
}

/**
 * _sqrt_recursion - uses sqrt_finder to return the result
 * @n : the provided numeral
 * Return : square root if natural, -1 if not possible
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_finder(n, 0));
	}
}
