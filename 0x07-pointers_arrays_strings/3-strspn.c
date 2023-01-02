#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int love, hope, bool;

	for (love = 0; *(s + love) != '\0'; love++)
	{
		bool = 1;
		for (hope = 0; *(accept + hope) != '\0'; hope++)
		{
			if (*(s + love) == *(accept + hope))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (love);
}
