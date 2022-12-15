#include "main.h"
/**
 * print_most_numbers - print btwn 0-9(2/4)
 * Return:0
 */
void print_most_numbers(void)
{
	int candy;

	for(candy = 48; candy < 58; candy++)
	{
		if (candy != 50 && candy != 52)
		{
			_putchar(candy);
		}
		_putchar('\n');
	}
}
