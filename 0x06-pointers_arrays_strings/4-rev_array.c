#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array. * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int love, candy, sawi;

	for (love = 0; love < n - 1; love++)
	{
		for (candy = love + 1; candy > 0; candy--)
		{
			sawi = *(a + candy);
			*(a + candy) = *(a + (candy - 1));
			*(a + (candy - 1)) = sawi;
		}
	}
}
