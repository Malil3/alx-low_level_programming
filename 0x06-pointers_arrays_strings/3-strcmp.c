#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int string =, array = 0;

	while (array == 0)
	{
		if ((*(s1 + string) == '\0') && (*(s2 + string) == '\0'))
			break;
		array = *(s1 + string) - *(s2 + string);
		string++;
	}
	return (array);
}
