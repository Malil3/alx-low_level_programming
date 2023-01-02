#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int love, joy = 0;

	for (love = 0; love < 64; love++)
	{
		if (love % 8 == 0 && love != 0)
		{
			joy = love;
			_putchar('\n');
		}
		_putchar(a[love / 8][love - joy]);
	}
	_putchar('\n');
}
