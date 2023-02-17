/*
 * File: 8-print_base16.c
 * Auth: Asmaa Sherif
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * only using putchar.
 *
 * Return: Always 0.
 */

int main(void)
{
  	int num;
  	char letter;

	for (num = 0; num <= 9; num++)
		putchar((num % 10)+ '0');

	for (letter = 'a'; letter <= 'f'; lette++)
		putchar(letter);

	putchar('\n');

	return (0);
}
