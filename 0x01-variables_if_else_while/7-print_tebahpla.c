#include <stdio.h>

/**
 *  main - prints out letters of the alphabet in reverse
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char lttr;

	for (lttr = 122; lttr > 96; --lttr)
	{
		putchar(lttr);
	}
	putchar('\n');
	return (0);
}
