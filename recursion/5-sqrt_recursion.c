#include "main.h"
/**
 * sqrt_math - the function that will actually calculate the sqrt
 * by making a guess as to the sqrt and iterating until sqrt is found
 * 
 * @n:number provided
 * @i:interating numeral guess
 * 
 * Description: base case checks if i is the sqrt
 * then checks if i is too large to be the sqrt returns -1 as failure
 * then returns the function recursively to check nest numeral
 * 
 * Return: result
 */
int sqrt_math(int n, int i)
{
    if (n == 1)
        return (1);
    
    else if (i * i == n)
        return (i);

    else if (n < 0)\
        return (-1);

    else if (i == n)
        return (-1);
    
    else if (i * i > n)
        return (-1);

    else
        return (sqrt_math(n, (i++)));
}

/**
 * _sqrt_recursion - returnd the natural square root of a number
 * 
 * @n: the provided number
 * 
 * Return: the resulting value
 */

int _sqrt_recursion(int n)
{
    return (sqrt_math(n, 0));
}
