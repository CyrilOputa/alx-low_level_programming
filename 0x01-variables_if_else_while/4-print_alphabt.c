#include <stdio.h>
#include "main.h"

/**
* main - This code is to print all alphabets except q and e
*
* Return: This ought to return void i guess
*/

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}

	}
	putchar('\n');

	return (0);
}
