#include "main.h"

/**
  * print_i - format d
  * @p: arg
  * Return: nothing
  */

void print_p(const void *p)
{
	unsigned long int add = (unsigned long int)p;
	char buffer[BUFF_SIZE];
	int i = 0;
	int y;

	do {
		unsigned long int r = add % 16;
		buffer[i++] = (r < 10) ? '0' + r : 'a' + r - 10;
		add /= 16;
	} while (add > 0);

	put_char('0');
	put_char('x');

	y = i - 1;

	for (; y >= 0; y--)
	{
		put_char(buffer[y]);
	}
}


