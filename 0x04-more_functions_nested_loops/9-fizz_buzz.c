#include <stdio.h>
/**
 * main - prints Fizz(mul ō 3), buzz(mul ō 5)& Fizzbuzz(mul ō 3&5)
 * Return:0
 */

int main(void)
{
	int candy;

	candy = 1;
	printf("%d", candy);
	for (candy = 2; candy <= 100; candy++)
	{
		if ((candy % 3 == 0) && (candy % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (candy % 3 == 0)
		{
			printf("Fizz");
		}
		else if (candy % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", candy);
		}
	}
	printf("\n");
	return (0);
}
