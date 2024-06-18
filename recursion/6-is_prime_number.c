#include "main.h"

/**
* is_prime_number - checks recursively whether a number is prime
*
* @n: the number to check
*
* Return: 1 if prime, else 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (optimus_prime(n, 2));
	}
}

/**
* optimus_prime - runs a bunch of dumb math that made my brain hurt
*
* @n: the number provided
* @i: the nuber to increment as a test figuret to n
*
* Return: 1 if prime else 0
*/

int optimus_prime(int n, int i)
{
	if (i <= n / 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (optimus_prime(n, (i + 1)));
	}
	return (1);
}
