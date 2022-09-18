#include <stdio.h>
/**
* main - size is not grandeur
*
* Return: This is 0
*/

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
	return (0);

}
