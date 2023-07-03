#include <stdio.h>

/**
 * main - prints out all alphabets but a and q
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lttrs[24]  = "abcdfghijklmnopqrstuvwxz";
	int i;

	for (i = 0; i < 24; ++i)
	{
	putchar(lttrs[i]);
	}
	putchar('\n');
	return (0);
}
