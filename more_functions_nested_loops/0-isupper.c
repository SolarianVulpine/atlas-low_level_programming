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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
