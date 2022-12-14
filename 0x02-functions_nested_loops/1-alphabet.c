#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase from a-z.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
