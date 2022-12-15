#include "main.h"
/**
 * more_numbers - print digits btwn 0 to 4, 10 times
 * Return:0
 */

void more_numbers(void)
{
	int sawi;
	int candy;

	for (candy = 0; candy < 10; candy++)
	{
		for (sawi = 0; sawi < 15; sawi++)
		{
			if (sawi >= 10)
				_putchar((sawi / 10) + 48);
				_putchar((sawi % 10) + 48);
		}
		_putchar('\n');
	}
}
