#include <stdio.h>
/**
 * main - entry point
 * Return:0
 */

int main(void)
{
	int cake;

	long int c1, c2, candy;

	c1 = 1;
	c2 = 2;

	printf("%ld, %ld", c1, c2);
	for (cake = 0; cake < 48; cake++)
	{
		candy = c1 + c2;
		printf(", %ld", candy);
		c1 = c2;
		c2 = candy;
	}
	printf("\n");
	return (0);
}
