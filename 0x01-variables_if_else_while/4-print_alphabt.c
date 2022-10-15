#include <stdio.h>

/**
 * main - Print the aplhabet in lowercase letters, except for e and q
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		}
		putchar('\n');

	return (0);
}

