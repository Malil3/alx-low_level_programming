#include "main.h"
/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int string = 0, c;

	while (string >= 0)
	{
		if (str[string] == '\0')
			break;
		string++;
	}
	if (string % 2 == 1)
		c = string / 2;
	else
		c = (string - 1) / 2;
	for (c++; c < string; c++)
		_putchar(str[c]);
	_putchar('\n');
}

