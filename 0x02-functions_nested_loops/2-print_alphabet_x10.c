#include "main.h"
/**
* print_alphabet_x10 - a function that prints 10 times the alphabet,
*followed by a new line.
*/
void print_alphabet_x10(void)
{
	char as;
	int a;

	while (a < 10)
	{
		as = 'a';
		while (as <= 'z')
		{
			_putchar(as);
			as++;
		}
		_putchar('\n');
		a++;
	}
}
