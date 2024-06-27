#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point to this code
 *
 * Description: This code should determine if a supplied character is lowercase
 *
 * @c: representative of character this code is checking
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	/*
	 * int c;
	 */

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
