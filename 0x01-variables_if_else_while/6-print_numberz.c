#include <stdio.h>
/**
 * main - print the digit between 0 and 9
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
