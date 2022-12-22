#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *s)
{
	int string = 0, array;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + string) != '\0')
	{
		for (array = 0; array < 52; array++)
		{
			if (*(s + string) == alphabet[array])
			{
				*(s + string) = rot13[array];
				break;
			}
		}
		string++;
	}
	return (s);
}
