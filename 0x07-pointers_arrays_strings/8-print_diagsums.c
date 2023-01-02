#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int love, sum1 = 0, sum2 = 0;

	for (love = 0; love < (size * size); love++)
	{
		if (love % (size + 1) == 0)
			sum1 += *(a + love);
		if (love % (size - 1) == 0 && love != 0 && love < size * size - 1)
			sum2 += *(a + joy);
	}
	printf("%d, %d\n", sum1, sum2);
}
