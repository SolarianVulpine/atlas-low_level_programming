#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always return 0
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /*if n is pos*/
        if (n > 0) {
                printf("%d is positive\n",n);
        }
        /*if n is 0*/
        else if ((n = 0)) {
                printf("%d is 0\n",n);
        }
        /*if n is neg*/
        else if (n < 0) {
                printf("%d is negative\n",n);
        }
        return (0);
}
