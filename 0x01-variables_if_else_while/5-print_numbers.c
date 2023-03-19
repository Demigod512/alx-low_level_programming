#include <stdio.h>
/**
*main -Entry point
*Discription: 'print base 10 numbers'
*Return: always 0
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
