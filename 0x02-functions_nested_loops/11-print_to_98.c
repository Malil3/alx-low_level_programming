#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: int to start from
 * Return 0 / 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
}
