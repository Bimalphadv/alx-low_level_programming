#include <stdio.h>
#include <ctype.h>

/**
 * main - Thie is my entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar ('\n');
	return (0);
}
