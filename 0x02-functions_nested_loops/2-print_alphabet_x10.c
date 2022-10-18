#include "main.h"
/**
 * print_alphabet_x10 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
	int b = 0;
	while (b < 10)
	{
		char a = 'a';
		while (a <= 'Z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}

