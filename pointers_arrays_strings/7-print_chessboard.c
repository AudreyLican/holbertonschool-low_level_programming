#include "main.h"

/**
* print_chessboard - function that prints the chessboard
* @a : array on 2 dimension
*
*/

void print_chessboard(char (*a)[8])
{
	int rows, cols;

	for (rows = 0; rows < 8; rows++)
	{
		for (cols = 0; cols < 8; cols++)
			_putchar(a[rows][cols]);
		_putchar('\n');
	}
}
