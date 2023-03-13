#include "main.h"

/**
 * print_alphabet - Aphabets in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}

	_putchar('\n');
}
