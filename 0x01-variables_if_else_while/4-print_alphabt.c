#include <stdio.h>

/**
 * main - prints out all alphabets but e and q
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lttrs[24]  = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; ++i)
	{
	putchar(lttrs[i]);
	}
	putchar('\n');
	return (0);
}
