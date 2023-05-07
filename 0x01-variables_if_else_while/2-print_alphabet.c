#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase
 * Return: 0
*/

int main(void)
{	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}

