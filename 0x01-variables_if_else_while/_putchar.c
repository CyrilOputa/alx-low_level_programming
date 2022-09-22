#include <unistd.h>
/**
* _putchar - Cto standard output
*
*@c: the character to print
*
*Return: this is to return -1
*
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
