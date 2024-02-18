#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * primechecker - checks if a number is prime through division
 * @n: the provided numeral
 * @i: a variable to assist with checking prime status
 * Return: determined by function
 */

int primechecker(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (primechecker(n, i + 1));
}

/**
 * is_prime_number - calls primechecker to check if the numeral is prime
 * @n: the numeral
 * Return: determined by the function
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primechecker(n, 2));
	}
}
