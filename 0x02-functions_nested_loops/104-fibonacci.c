#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i, boo, sawi;
	long int c1, c2, candy, cake, c11, c22;

	n1 = 1;
	n2 = 2;
	boo = sawi = 1;
	printf("%ld, %ld", c1, c2);
	for (i = 0; i < 96; i++)
	{
		if (boo)
		{
			candy = c1 + c2;
			printf(", %ld", candy);
			c1 = c2;
			c2 = candy;
		}
		else
		{
			if (sawi)
			{
				c11 = c1 % 1000000000;
				c22 = c2 % 1000000000;
				c1 = c1 / 1000000000;
				c2 = c2 / 1000000000;
				sawi = 0;
			}
			cake = (c11 + c22);
			candy = c1 + c2 + (cake / 1000000000);
			printf(", %ld", candy);
			printf("%ld", cake % 1000000000);
			c1 = c2;
			c11 = c22;
			c2 = candy;
			c22 = (cake % 1000000000);
		}
		if (((c1 + c2) < 0) && boo == 1)
			boo = 0;
	}
	printf("\n");
	return (0);
}
