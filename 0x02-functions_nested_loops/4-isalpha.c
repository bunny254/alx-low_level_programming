#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic char
 * @c: char to check
 * Return: 1 lowecase, uppercase, letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
