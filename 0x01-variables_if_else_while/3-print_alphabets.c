#include<stdio.h>

/**
 * main - printing alphabets in lowercase and upercase
 *
 * Return: 0
 */

int main(void)
{
	char b = 'a';
	char c = 'A';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

