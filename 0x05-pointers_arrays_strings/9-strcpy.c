#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int string = 0;

	while (string >= 0)
	{
		*(dest + string) = *(src + string);
		if (*(src + string) == '\0')
			break;
		string++;
	}
	return (dest);
}
