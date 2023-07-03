#include <stdio.h>

/**
 * main - prints alphabets in lowercase then in uppercase with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lttrs[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0 ; i < 52 ; ++i)
	{
	putchar(lttrs[i]);
	}
	putchar('\n');
	return (0);


}
