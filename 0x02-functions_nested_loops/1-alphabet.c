#include "holberton.h"

/**
 *print_alphabet - prints the lowercase alphabet using _putchar
 *
 *Return: void
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
