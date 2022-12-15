#include "main.h"
/**
 * _isdigit - checks if parameter is btwn 0-9
 * @c:input num
 * Return:1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
