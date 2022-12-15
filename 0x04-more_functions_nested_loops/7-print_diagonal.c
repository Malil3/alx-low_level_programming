#include "main.h"
/**
 * print_diagonal - print diagonal lines n times
 * @n:num ō times diagonal lines are printed
 * Return:0
 */

void print_diagonal(int n)
{
	int love, sawi;

	for (sawi = 0; sawi < n; sawi++)
	{
		for (love = 0; love < sawi; love++)
		{
			_putchar(' ');
		}
		_putchar(92);

		if (sawi < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
