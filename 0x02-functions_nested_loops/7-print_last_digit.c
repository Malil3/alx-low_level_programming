#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: int check
 * Return:value ō last digit
 */
int print_last_digit(int n)
{
	int love;
	love = n % 10;

	if (n < 0)
		love = love * -1;
	
	_putchar(love + '0');
	return (love);
}

