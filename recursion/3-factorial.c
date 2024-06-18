#include "main.h"

/**
* factorial - returns the resulting factorial of a given number
*
* @n: the provided number
*
* Return: the factorial result
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
