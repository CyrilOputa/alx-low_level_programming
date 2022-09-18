#include "main.h"

/**
isupper - checks upper character case
@c: carrier integer variable
Return: 1 if true, it returns 0 if false
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return(0);

}
