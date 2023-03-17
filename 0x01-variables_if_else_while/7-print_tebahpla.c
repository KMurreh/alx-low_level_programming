#include <stdio.h>

/**
 *main - Entry point
 *Description: prints the lowercase alphabet in reverse
 *using putchar only twice
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');

return (0);
}
