#include <stdio.h>
/**
 * main - Print alphabets upper and lower
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}
	for (a = 'A'; a <= 'Z'; a++)
{
	putchar(a);

}
	putchar('\n');

	{return 0; }
}
