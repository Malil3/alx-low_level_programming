#include "main.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int string = 0;

	while (string >= 0)
	{
		if (str[string] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[string]);
		string++;
	}
}
