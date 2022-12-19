#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */

int _atoi(char *s)
{
	unsigned int string = 0, a = 0, b = 0, c = 1, d = 1, e;

	while (*(s + string) != '\0')
	{
		if (a > 0 && (*(s + string) < '0' || *(s + string) > '9'))
			break;
		if (*(s + string) == '-')
			c *= -1;
		if ((*(s + string) >= '0') && (*(s + string) <= '9'))
		{
			if (a > 0)
				d *= 10;
			a++;
		}
		string++;
	}
	for (e = string - a; e < string; e++)
	{
		b = b + ((*(s + e) - 48) * d);
		d /= 10;
	}
	return (b * c);
}
