#include "main.h"

/**
 * print_most_numbers - prints numbers ranging
 *from 0 to 9 except for 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
