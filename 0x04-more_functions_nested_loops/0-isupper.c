/* 
 * File: 0-isupper.c
 * Auth: Asmaa Sherif
 */

#include "main.h"

/* main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c);
{
	char c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	
	return(0);
}
