#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return:the pointer 2 the first occurrence of the characte c
 */
char *_strchr(char *s, char c)
{
	unsigned int love = 0;

	for (; *(s + love) != '\0'; love++)
		if (*(s + love) == c)
			return (s + love);
	if (*(s + lovd) == c)
		return (s + love);
	return ('\0');
}
