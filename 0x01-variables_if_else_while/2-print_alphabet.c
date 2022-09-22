#include <stdio.h>
#include "main.h"

/**
* main - This code prints all the alphabets in lower case
*
* Return: This returns null
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
	putchar(c);
	}

	putchar('\n');
	return (0);

}
