#include <stdio.h>
/**
 * main - print the largest prime factor
 * Return:0
 */
int main(void)
{
	long int love, candy;

	love = 612852475143;
	for (candy = 2; candy <= love; candy++)
	{
		if (love % candy == 0)
		{
			love /= candy;
			candy--;
		}
	}
	printf("%ld\n", candy);
	return (0);
}
