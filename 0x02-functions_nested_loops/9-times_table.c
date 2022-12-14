#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int love, joy, peace;

	for (love = 0; love < 10; love++)
	{
		for (joy = 0; joy < 10; joy++)
		{
			peace = joy * love;
			if (joy == 0)
			{
				_putchar(peace + '0');
			}
			if (peace < 10 && joy != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(peace + '0');
			}
			else if (peace >= 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((peace / 10) + '0');
				_putchar((peace % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
