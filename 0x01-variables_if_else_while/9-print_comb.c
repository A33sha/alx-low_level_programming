#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');

	return (0);
}