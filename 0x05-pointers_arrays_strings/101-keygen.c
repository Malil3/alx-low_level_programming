#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int g = 0, c = 0;
	time_t s;

	srand((unsigned int) time(&s));
	while (c < 2772)
	{
		g = rand() % 128;
		if ((c + g) > 2772)
			break;
		c = c + g;
		printf("%c", g);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
