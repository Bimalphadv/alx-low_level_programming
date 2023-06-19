#include <stdio.h>

/**
 * main - This my entry point
 *
 * Return: Always on Success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
