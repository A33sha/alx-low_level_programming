#include <stdio.h>

/**
 * main - print out the hexadecimals in lowercase
 * Return: 0
 */

int main(void)
{
	int n = 0;
	char p = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	while (p <= 'f')
	{
		putchar(p);
		p++;
	}

	putchar('\n');
	return (0);
}
