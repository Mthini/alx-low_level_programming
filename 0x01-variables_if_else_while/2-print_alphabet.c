#include <stdio.h>

/**
 * main - A program that prints alphabets in lower case only using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lttrs[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; ++i)
	{
		putchar(lttrs[i]);
	}
	putchar("\n");
	return (0);
}
