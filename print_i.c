#include "main.h"

/**
  * print_i - format d
  * @n: arg
  * Return: nothing
  */

void print_i(int n)
{
	char buffer[BUFF_SIZE];
	int i = 0;
	int y;

	if (n < 0)
	{
		put_char('-');
		n = -n;
	}

	do
	{
		buffer[i++] = '0' + (n % 10);
		n /= 10;
	}while (n > 0);

	y = i - 1;

	for (; y >= 0; y--)
	{
		put_char(buffer[y]);
	}
}


