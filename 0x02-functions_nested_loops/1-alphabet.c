#include "main.h"

/**
 * main - Aphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
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
