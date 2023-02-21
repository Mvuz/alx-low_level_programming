#include <stdio.h>

/**
 * main - possible combinations of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
{
	putchar(n + '0');
	if (n == 9)
	{break; }
	putchar(',');
	putchar(' ');
}
	putchar('\n');
	{return 0; }
}
