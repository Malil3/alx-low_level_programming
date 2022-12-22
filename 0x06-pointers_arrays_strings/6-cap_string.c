#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *s)
{
	int string = 0, array;
	int my_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + string) >= 97 && *(s + string) <= 122)
		*(s + string) = *(s + string) - 32;
	string++;
	while (*(s + string) != '\0')
	{
		for (array = 0; array < 13; array++)
		{
			if (*(s + string) == my_words[array])
			{
				if ((*(s + (string + 1)) >= 97) && (*(s + (string + 1)) <= 122))
					*(s + (string + 1)) = *(s + (string + 1)) - 32;
				break;
			}
		}
		string++;
	}
	return (s);
}
