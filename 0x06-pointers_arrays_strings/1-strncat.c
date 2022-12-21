#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int string = 0, array = 0;

	while (*(dest + string) != '\0')
	{
		string++;
	}
	while (array < n)
	{
		*(dest + string) = *(src + array);
		if (*(src + string) == '\0')
			break;
		string++;
		array++;
	}
	return (dest);
}
