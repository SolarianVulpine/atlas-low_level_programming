#include "main.h"

/**
 * _isupper - the entry point of my code
 *
 * Description: Should determine if a character is uppercase
 *
 * @c: the character to check
 *
 * Return: will return 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
