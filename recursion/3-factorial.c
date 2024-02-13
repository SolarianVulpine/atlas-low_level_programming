#include "main.h"
#include <stdio.h>

/*
 * factorial - aims to print the result of a factorial
 * @n: the provided numeral
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n-1));
	}
}
