#include "main.h"
#include <stdio.h>

/**
* print_chessboard - prints a chessboard pattern
*
* @a: 2d array representing the chessboard
* @grid: 2D array representing the chessboard
*
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(a[row][col]);
		}
		putchar('\n');
	}
}
