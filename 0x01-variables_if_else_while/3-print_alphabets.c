#include <stdio.h>
#include "main.h"

/**
* main - This code interchanges the codes of the alphabets
*
* Return: this should return void
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
