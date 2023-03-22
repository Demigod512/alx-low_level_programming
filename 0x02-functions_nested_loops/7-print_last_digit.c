#include "main.h"
/**
*print_last_digit - a function that prints the last digit of a number.
*@a: the number to be iterated.
*Return: value of the last number.
*/
int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (0);
}
