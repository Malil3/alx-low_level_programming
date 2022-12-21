#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int love;

	for (love = 0; love < n && src[love] != '\0'; love++)		dest[love] = src[love];

	for ( ; love < n; love++)
		dest[love] = '\0';
	return (dest);
}
