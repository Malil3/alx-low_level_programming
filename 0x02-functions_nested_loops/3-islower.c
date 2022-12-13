#include "main.h"
/**
 * _islower - check if char is lowercase
 * @c:Char to b checked
 * Return:0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
