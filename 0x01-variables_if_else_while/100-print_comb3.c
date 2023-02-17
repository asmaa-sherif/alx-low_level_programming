/*
 * File: 100-print_comb3.c
 * Auth: Asmaa Sherif
 */

#include <stdio.h>

/**
 * Print all possible different combinations of two digitals.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	  {
	  	for(j = i + 1; j < 10; j++)
		  {
		  	putchar((i % 10) + '0');
		  	putchar((j % 10) + '0');

			if(i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		  }
	  }
		
		putchar('\n');

		return (0);
}
