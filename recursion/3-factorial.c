#include "main.h"
#include <stdio.h>

/**
 * factorial - aims to print the result of a factorial
 * factorial: return a value to relust the factorial of a numeral
 * @n: the provided numeral
 * Return: 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
