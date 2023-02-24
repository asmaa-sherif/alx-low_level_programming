#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int line, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= size; line++)
		{
			_putchar('#');
			for (hash = 2; hash <= size; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
