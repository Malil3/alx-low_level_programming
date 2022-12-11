#include <stdio.h>
/**
 * main - entry point
 *
 * Return:0
 */

int main(void)
{
	int l;
	int m;

	for (l = 0; l < 100; l++)
	{
		for (m = 0; m < 100; m++)
		{
			if (l < m)
			{
				putchar((l / 10) + 48);
				putchar((l % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				if (l != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
