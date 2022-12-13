#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	char boo;
	int me;

	me = 0;

	while (me < 10)
	{
		boo = 'a';
		while (boo <= 'z')
		{
			_putchar(boo);
			boo++;
		}
	_putchar('\n');
	me++;
	}
}
