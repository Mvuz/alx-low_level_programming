#include <stdio.h>
/**
 * main - print aphabets beside q and e
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
{
	if (a == 'e' || a == 'q')
	continue;
	putchar(a);
}
	putchar('\n');
	{return 0; }
}
