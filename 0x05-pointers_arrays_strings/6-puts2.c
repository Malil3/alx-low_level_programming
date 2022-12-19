#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int string = 0;

	while (string >= 0)
	{
		if (str[string] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (string % 2 == 0)
			_putchar(str[string]);
		string++;
	}
}
