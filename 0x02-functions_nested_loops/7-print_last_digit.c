#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number whose last digit is to be printed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
        int last_digit;

        if (n < 0)
                n = -n;

        if (n == 0)
        {
                _putchar('0');
                return (0);
        }

        last_digit = n % 10;

        _putchar(last_digit + '0');
	_putchar(int_min + '0');
        return (last_digit);
}