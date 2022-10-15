#include <stdio.h>

/**
 * main - Print the alphabet in lowercase letters in revers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char letter;

		for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

		putchar('\n');

		return (0);
}
