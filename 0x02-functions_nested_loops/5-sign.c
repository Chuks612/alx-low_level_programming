#include "main.h"
/**
 * print _sign - prints the sign of a nmuber
 * @n: number being tested
 * Return: always 0
 */

int prin_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('_');
		return (-1);
	}
	return (0);
}
