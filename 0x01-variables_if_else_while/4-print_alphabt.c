#include <stdio.h>

/**
 * main - This is my entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else
{
putchar(lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
