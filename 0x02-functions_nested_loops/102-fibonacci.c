#include <stdio.h>
/**
* main- program that prints the first 50 Fibonacci numbers,
*Return: nothing
*/
int main(void)
{
	int i = 0;
	long k = 1, l = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", k);
	else if (i == 1)
	printf(", %ld", l);
	else
	{
	l += k;
	k = l - j;
	printf(", %ld", l);
	}
	++i;
	}
	printf("\n");
	return (0);
}
