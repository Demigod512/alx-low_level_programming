#include "main.h"
/**
*_isalpha - a function that checks for alphabetic character.
*Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
* @c: character to be checked
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
