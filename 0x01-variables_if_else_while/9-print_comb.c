/*
 * File: 9-print_comb.c
 * Auth: Asmaa Sherif
 */

#include <stdio.h>

/**
 * Prints all possible comination of single-digital numbers,
 * Numbers must be sepereted by , followd by space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	  {
		putchar((num % 10) + '0');
		if(num == 9)
			continue;

		putchar(',');
		putchar(' ');
	  }
	putchar('\n');
	return (0);
}
