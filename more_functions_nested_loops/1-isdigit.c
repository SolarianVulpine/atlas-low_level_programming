#include "main.h"

/**
 * _isdigit - is the entry point of this program
 *
 * Description: should determine if 'c' is a digit
 *
 * @c: the character to be checked
 *
 * Return: 1 if digit 0 otherwise
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
