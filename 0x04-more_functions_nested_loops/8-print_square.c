#include "main.h"
/**
 * print_square - print saqure(#)
 * @size:size of the square
 * Return:0
 */

void print_square(int size)
{
	int love, candy;

	for (love = 0; love < size; love++)
	{
		for (candy = 0; candy < size; candy++)
		{
			_putchar(35);
		}
		if (love != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
