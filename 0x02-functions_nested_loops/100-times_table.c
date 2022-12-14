#include "main.h"
/**
 * print_times_table - prints the times table
 * @n:
 * Return:0
 */

void print_times_table(int n)
{
	int love, joy, boo;
	if (n >= 0 && n <= 15)
	{
		for (love = 0; love <= n; love++)
		{
			_putchar(48);
			for (joy = 1; joy <= n; joy++)
			{
				boo = love * joy;
				_putchar(44);
				_putchar(32);
				if (boo <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(boo + 48);
				}
				else if (boo <= 99)
				{
					_putchar(32);
					_putchar((boo / 10) + 48);
					_putchar((boo % 10) + 48);
				}
				else
				{
					_putchar(((boo / 100) % 10) + 48);
					_putchar(((boo / 10) % 10) + 48);
					_putchar((boo % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
