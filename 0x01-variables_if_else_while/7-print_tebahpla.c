#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 'z'; i >= 'a'; i--)
{
if (i % 2 == 1)
{
putchar(i);
}
putchar('\n');
return (0);
}
