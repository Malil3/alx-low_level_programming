#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int love, joy;

	for (love = 0; *(s + love) != '\0'; love++)
	{
		for (joy = 0; *(accept + joy) != '\0'; joy++)
		{
			if (*(s + love) == *(accept + joy))
				return (s + love);
		}
	}
	return ('\0');
}
