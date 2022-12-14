#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int love = 0;
	int joy;
	int peace;

	while (love <= 9)
	{
		joy = 0;
		while (joy <= 9)
		{
			peace = love * joy;
			if (joy == 0)
			{
				_putchar('0' + peace);
			}
			else if (peace < 10)
			{
				_putchar(' ');
				_putchar('0' + peace);
			}
			else
			{
				_putchar(('0' + peace / 10));
				_putchar(('0' + peace % 10));
			}
			if (joy < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			joy++;
		}
		_putchar('\n');
		love++;
	}
}
