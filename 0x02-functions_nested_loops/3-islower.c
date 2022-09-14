#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar ('\n');
	}
}
#include "main.h"

/**
 * _islower -> checks if the character is lowercase
 * @c: a character argument
 * Return: returns 1 and 0 depending on the condition
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
