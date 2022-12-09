#include <stdio.h>
/**
 * main - entry point
 *
 * Return:0
 */

int mai(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{ putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
