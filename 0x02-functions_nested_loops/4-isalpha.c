#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Char 2b checked
 * Return: 1 if c is a letter else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
