#include <stdio.h>
/**
*main -Entry point
*Discription: 'hexadecimal numbers and alphabets'
*Return: always 0
*/
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
