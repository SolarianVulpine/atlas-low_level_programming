#include "main.h"

/**
 * _pow_recursion - will calculate x to the power of y
 * 
 * @x: the first number
 * @y: the exponent
 * 
 * Return: the value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    else if (y == 0)
    {
        return (1);
    }
    else
    {
        return (x * _pow_recursion(x, y - 1));
    }
}
