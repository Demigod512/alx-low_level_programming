#include <stdio.h>
/**
*main -Entry point
*Discription: 'printing base 10 with putchar'
*Return: always 0
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + 48);
	}
	putchar('\n');
	return (0);
}
