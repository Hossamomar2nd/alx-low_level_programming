#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
        n = -n; /* Convert negative number to positive */

    last_digit = n % 10; /* Get the remainder when divided by 10 */

    _putchar('0' + last_digit); /* Print the digit */
    return last_digit;
}
