#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: int to start from
 * Return 0 / 1
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
