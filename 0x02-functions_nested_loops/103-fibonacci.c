#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int c1, c2;
	long int candy, sawi;

	c1 = 1;
	c2 = 2;
	candy = sawi = 0;

	while (candy <= 4000000)
	{
		candy = c1 + c2;
		c1 = c2;
		c2 = candy;
		if ((c1 % 2) == 0)
		{
			sawi += c1;
		}
	}
	printf("%ld\n", sawi);
	return (0);
}

