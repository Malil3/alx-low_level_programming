#include "main.h"
/**
 * print_triangle -prints a triangle
 * @size:number ō lines
 * Return:0
 */
void print_triangle(int size)
{
	int love, joy;

	for (love = 0; love < size; love++)
	{
		for (joy = 1; joy < (size - love); joy++)
			_putchar(' ');
		for (joy--; joy < size; joy++)
			_putchar(35);
		if (love < (size - 1))
		_putchar('\n');
	}
	_putchar('\n');
}
