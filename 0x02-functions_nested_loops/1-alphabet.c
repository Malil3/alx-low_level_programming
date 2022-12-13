#include "main.h"
/**
 * print_alphabet - entry point
 * Return:0
 */

void print_alphabet(void)
{
	char boo;

	for (boo = 'a'; boo <= 'z'; boo++)
	{
		_putchar(boo);
	}
	_putchar('\n');
}
