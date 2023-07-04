#include <stdio.h>

/**
 * main - prints all single digit base 10 numbers starting from 0
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10 ; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
