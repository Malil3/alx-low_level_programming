#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	int string = 0, array;
	int lowcase[] = {97, 101, 111, 116, 108};
	int uppcase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + string) != '\0')
	{
		for (array = 0; array < 5; array++)
		{
			if (*(s + string) == lowercase[array] || *(s + array) == uppcase[array])
			{
				*(s + string) = numbers[array];
				break;
			}
		}
		string++;
	}
	return (s);
}
