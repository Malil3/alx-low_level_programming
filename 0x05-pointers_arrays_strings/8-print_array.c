#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int s = 0;

	for (; s < n; s++)
	{
		printf("%d", *(a + s));
		if (s != (n - 1))
			printf(", ");
	}
	printf("\n");
}
