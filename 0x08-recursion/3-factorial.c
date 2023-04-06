#include "main.h"

/**
 * factorial - return the factorial of a given number in the program
 * @n: input number
 * Return: factorial of input
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
